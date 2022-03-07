// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTerrainGenerator.h"
#include "RuntimeMeshCore.h"
#include "Components/RuntimeMeshComponentStatic.h"
#include "Math/IntPoint.h"
#include "DrawDebugHelpers.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "SimplexNoiseBPLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Containers/Map.h"
#include "FChunkMachine.h"
#include "HAL/Runnable.h"

// Sets default values
AProceduralTerrainGenerator::AProceduralTerrainGenerator()
{
	//Pozwala na wykonywanie metody Tick()
	PrimaryActorTick.bCanEverTick = true;
	//Konstrukcja komponentu
	meshGenerator = CreateDefaultSubobject<URuntimeMeshComponentStatic>("mesh");

}

// Called when the game starts or when spawned
void AProceduralTerrainGenerator::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProceduralTerrainGenerator::Tick(float DeltaTime)
{
	//Tick Klasy nadrzêdnej
	Super::Tick(DeltaTime);
	//Je¿eli generacja siê rozpoczê³a, sprawdzaj pozycjê postaci i wzglêdem niej generuj teren
	if(bRun)TrackCharacter();

	//Usuwanie i tworzenie aktorów
	for (int32 i = 0; i < spawnSpeed && actorsToDestroy.Num()>0; i++)
	{
		actorsToDestroy[0]->Destroy();
		actorsToDestroy.RemoveAt(0);
	}
	for(int32 i = 0; i<spawnSpeed && actorsToAdd.Num()>0; i++)
	{
		FQueuedActor& actorToAdd = actorsToAdd[0];
		if (ChunkMap.Contains(actorToAdd.Chunk) && actorToAdd.StructClass)
		{
			AActor* a = GetWorld()->SpawnActor<AActor>
				(
					actorToAdd.StructClass,
					actorToAdd.Location, actorToAdd.Rotation);
				a->SetActorScale3D(actorToAdd.Scale);
				ChunkMap.Find(actorToAdd.Chunk)->placeableStructures.Add(a);
		}
		actorsToAdd.RemoveAt(0);
	}
		


}




bool AProceduralTerrainGenerator::CreateChunk(FIntPoint coordinates)
{
	//Nie generowaæ segmentu, jeœli generator ma ustawione b³êdne parametry
	if (chunkResolution < 2) return false;
	//Zmienna okreœlaj¹ca czy na odpowiednim segmencie siatki 
	//powinien byæ wygenerowany blok wody
	bool bCreateWater = false;
	//Zbiór punktów siatki wielok¹tów
	TArray<FVector> verts;
	//Zbiór trójk¹tów siatki wielok¹tów
	TArray<int32> tris;
	//Zbiory wartoœci kana³ów UV dla ka¿dego punktu siatki: 
	//podstawowego i kana³u wartoœci biomu
	TArray<FVector2D> UV0, UV_Biome;
	//Zmienna pomocnicza, okreœlaj¹ca odstêpy 
	//pomiêdzy s¹siednimi punktami siatki w osiach X i Y
	float step = chunkSize / (chunkResolution - 1);
	//Zmienna pomocnicza zawieraj¹ca dane o biomie 
	//w aktualnie modyfikowanym punkcie siatki wielok¹tów
	float biome;

	//Pierwotne utworzenie rozmieszczonych w 2D punktów siatki 
	//i przypisanie podstawowemu kana³owi UV odpowiednich wartoœci
	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution,
		chunkResolution, tris, verts, UV0, step);
	//Zarezerwowanie rozmiaru dla zbioru wartoœci kana³u UV biomu punktów, 
	//by dynamiczny zbiór nie musia³ wielokrotnie 
	//dokonywaæ operacji przydzielania pamiêci
	UV_Biome.Reserve(UV0.Num());

	//Lokalne przesuniêcie ka¿dego punktu o koordynaty segmentu do któego nale¿¹.
	int32 x = coordinates.X * chunkSize;
	int32 y = coordinates.Y * chunkSize;
	//Iterowanie po ka¿dym punkcie siatki
	for (int32 i = 0; i < verts.Num(); i++)
	{
		FVector& vert = verts[i];

		//Dodanie przesuniêcia do ka¿dego punktu
		vert.X += x;
		vert.Y += y;

		//Generator biomów, wykorzystuj¹cy Simplex Noise
		biome = USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X / biomeScale,
			vert.Y / biomeScale, 2.3f, 0.6f, 4, 1, true);

		//Dodanie informacji o biomie do punktu siatki
		UV_Biome.Add(FVector2D(biome));

		//Wykorzystanie informacji o biomie oraz punkcie siatki 
		//do przydzielenia mu odpowiedniej wysokoœci.
		vert.Z += MapBiome(FVector2D(vert.X / noiseScale, vert.Y / noiseScale),
			biome) * heightScale;

		//Ustalanie, czy na segmencie powinna zostaæ wygenerowana woda.
		if (!bCreateWater)bCreateWater = (vert.Z <= 0);

		//Generator struktur
		GetActorOnPoint(vert, i, biome);
	}
	//Do struktur w kolejce zostaje dodana równie¿ woda, jeœli jest taka potrzeba
	if (bCreateWater)actorsToAdd.Add(FQueuedActor(WaterBodyClass.Get(),FVector(x,y,0),
		FRotator(0,0,0),FVector(chunkSize/2,chunkSize/2,1),coordinates));

	//Przekazanie informacji o siatce do faktycznej jej generacji
	ReceiveChunk(coordinates, verts, tris, UV0, UV_Biome);

	//Zwróæ prawid³owe wykonanie metody
	return true;
}

bool AProceduralTerrainGenerator::RemoveChunk(FIntPoint coordinates)
{
	//Je¿eli z jakiegoœ powodu usuwany jest nieistniej¹cy segment, 
	//metoda zostaje zwrócona
	if (!ChunkMap.Contains(coordinates)) return false;
	//Dane o segmencie
	FChunkData data = ChunkMap.FindRef(coordinates);
	//Dodawanie wszystkich aktorów w segmencie do kolejki usuwaj¹cej
	actorsToDestroy.Append(data.placeableStructures);
	//Usuwanie odpowiedniej sekcji proceduralnej siatki za pomoc¹ komponentu
	meshGenerator->GetProvider()->RemoveSection(0, data.meshSectionID);
	//Usuwanie wpisu o nieistniej¹cej ju¿ sekcji siatki wielok¹tów
	ChunkMap.Remove(coordinates);

	return true;
}


void AProceduralTerrainGenerator::ReceiveChunk(FIntPoint chunk,
	TArray<FVector>& verts, TArray<int32>& tris,
	TArray<FVector2D>& UV0, TArray<FVector2D>& UVB)
{
	TArray<AActor*> emptyarr = TArray<AActor*>();
	//indeks, który bêdzie przypisywany sekcji siatki wielok¹tów
	int32 index = FindFirstFreeInt(meshGenerator->GetSectionIds(0));
	//Zmienna pomocnicza, pusty zbiór dla pozosta³ych kana³ów UV sekcji
	TArray<FVector2D> emptyUVs = TArray<FVector2D>();
	//Dane o sekcji siatki wielok¹tów
	FChunkData tmp = FChunkData(index, emptyarr);
	//Przekazywanie danych do komponentu
	meshGenerator->CreateSectionFromComponents(0,index,0,verts,
		tris,TArray<FVector>(),UV0,UVB,
		emptyUVs,emptyUVs,TArray<FColor>(),
		TArray<FRuntimeMeshTangent>());

	//Dodanie wpisu o nowej sekcji siatki wielok¹tów
	ChunkMap.Add(chunk, tmp);
}


// Metoda Generuj¹ca teren wzglêdem kursora bêd¹cego postaci¹
void AProceduralTerrainGenerator::TrackCharacter()
{
	if(trackedCharacter) //Wykonuje poni¿sz¹ instrukcjê jeœli kursor jest ustawiony
	{
		//Ustalenie koordynatów sekcji terenu, na której kursor(postaæ) siê znajduje
		FIntPoint charChunk = FIntPoint(
			(int32)trackedCharacter->GetActorLocation().X / chunkSize,
			(int32)trackedCharacter->GetActorLocation().Y / chunkSize
		);
		//Jeœli koordynaty siê zmieni³y od ostatniej kratki symulacji, rozpocznij modyfikacjê siatki
		if(charChunk!=lastCharChunk)
		{
			lastCharChunk = charChunk;
			//Tworzenie zbioru koordynatów segmentów, które powinny byæ wygenerowane
			TArray<FIntPoint> chunksToAdd;
			for(int32 x =-(int32)renderDistanceInChunks;x <= (int32)renderDistanceInChunks;x++)
			{
				for (int32 y = -(int32)renderDistanceInChunks; y <= (int32)renderDistanceInChunks; y++)
				{
					chunksToAdd.Add(FIntPoint(x, y) + charChunk);
				}
			}


			//Zbiór segmentów, które zosta³y ju¿ wygenerowane
			TArray<FIntPoint> keys;
			ChunkMap.GetKeys(keys);
			for(int i = 0; i<keys.Num();i++)
			{
				//Usuwanie segmentów które s¹ za daleko
				if (!chunksToAdd.Contains(keys[i])) RemoveChunk(keys[i]);
			}

			for(int i = 0;i< chunksToAdd.Num();i++)
			{
				//Tworzenie segmentów, które nie zosta³y jeszcze wygenerowane, a powinny
				if(!ChunkMap.Contains(chunksToAdd[i])) CreateChunk(chunksToAdd[i]);
			}
		}
	}
}

float AProceduralTerrainGenerator::WeightInterpolation(float A, float valueA,
	float B, float valueB, float alpha)
{
	//przypisywanie wartoœci alpha, która pos³u¿y do liniwoej interpolacji 
	alpha = FMath::Clamp(
		UKismetMathLibrary::NormalizeToRange(alpha, valueA, valueB),
		0.0f, 1.0f);
	//zwraca wynik interpolacji
	return FMath::Lerp(A, B, alpha);
}
float AProceduralTerrainGenerator::BiomeDeform(FVector2D vert, EBiomeType biome)
{
	//Dobór wysokoœci punktu wzglêdem biomu
	switch (biome)
	{
	case EBiomeType::SEA:
	{
		return BiomeDeform(vert, EBiomeType::STD) * 2 - 200;
	}
	case EBiomeType::BEACH:
	{
		return BiomeDeform(vert, EBiomeType::STD) * 2 + 10;
	}
	case EBiomeType::PLAINS:
	{
		return BiomeDeform(vert, EBiomeType::STD) + 40;
	}
	case EBiomeType::MOUNTAINS:
	{
		return BiomeDeform(vert, EBiomeType::STD) + 1000 
			+ (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X, vert.Y,
				2.3f, 0.6f, 3, 1, true)) * 500;
	}
	case EBiomeType::PEAKS:
	{
		return BiomeDeform(vert, EBiomeType::MOUNTAINS) + 1000 
			+ (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X/2 , vert.Y/2,
				2.3f, 0.6f, 3, 1, true)) * 250;
	}
	case EBiomeType::STD:
	{
		return USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X * 16, vert.Y * 16,
			2.3f, 0.6f, 3, 1, true) * 8;
	}
	default:
		return 0;
	}
}




//Metoda przypisuj¹ca odpowiedni¹ wysokoœæ punktowi wzglêdem wartoœci biomu
float AProceduralTerrainGenerator::MapBiome(FVector2D pos, float biome)
{
	if (biome <= 0.12f)//Interpolacja pomiêdzy biomem morza a pla¿y
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::SEA),
			0.f, BiomeDeform(pos, EBiomeType::BEACH), 0.12f, biome);
	}
	else if (biome <= 0.5f)//Interpolacja  pomiêdzy biomem pla¿y a stepów
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::BEACH),
			0.12f, BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, biome);
	}
	else if (biome <= 0.9f)//Interpolacja pomiêdzy biomem stepów a gór
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::PLAINS),
			0.5f, BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, biome);
	}
	else //Interpolacja pomiêdzy biomem gór a szczytów
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::MOUNTAINS),
			0.9f, BiomeDeform(pos, EBiomeType::PEAKS), 1.f, biome);
	}

}

int32 AProceduralTerrainGenerator::FindFirstFreeInt(TArray<int32> ints)
{
	int32 i = 0;
	while (ints.Contains(i))i++;
	return i;
}
void AProceduralTerrainGenerator::Init()
{
	FRuntimeMeshCollisionSettings settings;
	settings.bUseComplexAsSimple = true;
	settings.bUseAsyncCooking = true;
	meshGenerator->SetCollisionSettings(settings);
	meshGenerator->DisableNormalTangentGeneration();
	ChunkMap.Empty();
	USimplexNoiseBPLibrary::setNoiseSeed(noiseSeed);
	bRun = true;	
}

//Metoda rozk³¹daj¹ca aktorów po terenie
void AProceduralTerrainGenerator::GetActorOnPoint(FVector& loc, int32 vertIndex, float biome)
{
	//Zapobieganie duplikatom aktorów w punktach krañcowych segmentu
	if(vertIndex % chunkResolution != 0 && vertIndex / chunkResolution != 0)	
		//Iterowanie po ka¿dym potencjalnym aktorze do utworzenia
		for(int i = 0;i<structurePlacement.Num();i++)
	{
		FStructurePlacementData& structure = structurePlacement[i];
		if
			(
				//Porównanie wartoœci szumu z wartoœci¹ krzywej dla biomu
				USimplexNoiseBPLibrary::SimplexNoiseInRange2D(loc.X,loc.Y,0,1) 
				<= 
				structure.PlacementCurve->GetFloatValue(biome)

				&&

				//Porównanie indeksu punktu z jego odstêpem 
				vertIndex % structure.step == 0

			)
		{
			//Dodanie aktora do kolejki
			actorsToAdd.Add
			(
				FQueuedActor
				(
				structure.structureClass.Get(),
				loc,
				FRotator(0,vertIndex%360,0),
				FIntPoint(loc.X / chunkSize, loc.Y / chunkSize)
				)
			);
			return;
		}
	}

}
