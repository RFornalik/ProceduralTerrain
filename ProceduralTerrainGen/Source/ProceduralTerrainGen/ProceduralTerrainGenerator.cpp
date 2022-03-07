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
	//Tick Klasy nadrz�dnej
	Super::Tick(DeltaTime);
	//Je�eli generacja si� rozpocz�a, sprawdzaj pozycj� postaci i wzgl�dem niej generuj teren
	if(bRun)TrackCharacter();

	//Usuwanie i tworzenie aktor�w
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
	//Nie generowa� segmentu, je�li generator ma ustawione b��dne parametry
	if (chunkResolution < 2) return false;
	//Zmienna okre�laj�ca czy na odpowiednim segmencie siatki 
	//powinien by� wygenerowany blok wody
	bool bCreateWater = false;
	//Zbi�r punkt�w siatki wielok�t�w
	TArray<FVector> verts;
	//Zbi�r tr�jk�t�w siatki wielok�t�w
	TArray<int32> tris;
	//Zbiory warto�ci kana��w UV dla ka�dego punktu siatki: 
	//podstawowego i kana�u warto�ci biomu
	TArray<FVector2D> UV0, UV_Biome;
	//Zmienna pomocnicza, okre�laj�ca odst�py 
	//pomi�dzy s�siednimi punktami siatki w osiach X i Y
	float step = chunkSize / (chunkResolution - 1);
	//Zmienna pomocnicza zawieraj�ca dane o biomie 
	//w aktualnie modyfikowanym punkcie siatki wielok�t�w
	float biome;

	//Pierwotne utworzenie rozmieszczonych w 2D punkt�w siatki 
	//i przypisanie podstawowemu kana�owi UV odpowiednich warto�ci
	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution,
		chunkResolution, tris, verts, UV0, step);
	//Zarezerwowanie rozmiaru dla zbioru warto�ci kana�u UV biomu punkt�w, 
	//by dynamiczny zbi�r nie musia� wielokrotnie 
	//dokonywa� operacji przydzielania pami�ci
	UV_Biome.Reserve(UV0.Num());

	//Lokalne przesuni�cie ka�dego punktu o koordynaty segmentu do kt�ego nale��.
	int32 x = coordinates.X * chunkSize;
	int32 y = coordinates.Y * chunkSize;
	//Iterowanie po ka�dym punkcie siatki
	for (int32 i = 0; i < verts.Num(); i++)
	{
		FVector& vert = verts[i];

		//Dodanie przesuni�cia do ka�dego punktu
		vert.X += x;
		vert.Y += y;

		//Generator biom�w, wykorzystuj�cy Simplex Noise
		biome = USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X / biomeScale,
			vert.Y / biomeScale, 2.3f, 0.6f, 4, 1, true);

		//Dodanie informacji o biomie do punktu siatki
		UV_Biome.Add(FVector2D(biome));

		//Wykorzystanie informacji o biomie oraz punkcie siatki 
		//do przydzielenia mu odpowiedniej wysoko�ci.
		vert.Z += MapBiome(FVector2D(vert.X / noiseScale, vert.Y / noiseScale),
			biome) * heightScale;

		//Ustalanie, czy na segmencie powinna zosta� wygenerowana woda.
		if (!bCreateWater)bCreateWater = (vert.Z <= 0);

		//Generator struktur
		GetActorOnPoint(vert, i, biome);
	}
	//Do struktur w kolejce zostaje dodana r�wnie� woda, je�li jest taka potrzeba
	if (bCreateWater)actorsToAdd.Add(FQueuedActor(WaterBodyClass.Get(),FVector(x,y,0),
		FRotator(0,0,0),FVector(chunkSize/2,chunkSize/2,1),coordinates));

	//Przekazanie informacji o siatce do faktycznej jej generacji
	ReceiveChunk(coordinates, verts, tris, UV0, UV_Biome);

	//Zwr�� prawid�owe wykonanie metody
	return true;
}

bool AProceduralTerrainGenerator::RemoveChunk(FIntPoint coordinates)
{
	//Je�eli z jakiego� powodu usuwany jest nieistniej�cy segment, 
	//metoda zostaje zwr�cona
	if (!ChunkMap.Contains(coordinates)) return false;
	//Dane o segmencie
	FChunkData data = ChunkMap.FindRef(coordinates);
	//Dodawanie wszystkich aktor�w w segmencie do kolejki usuwaj�cej
	actorsToDestroy.Append(data.placeableStructures);
	//Usuwanie odpowiedniej sekcji proceduralnej siatki za pomoc� komponentu
	meshGenerator->GetProvider()->RemoveSection(0, data.meshSectionID);
	//Usuwanie wpisu o nieistniej�cej ju� sekcji siatki wielok�t�w
	ChunkMap.Remove(coordinates);

	return true;
}


void AProceduralTerrainGenerator::ReceiveChunk(FIntPoint chunk,
	TArray<FVector>& verts, TArray<int32>& tris,
	TArray<FVector2D>& UV0, TArray<FVector2D>& UVB)
{
	TArray<AActor*> emptyarr = TArray<AActor*>();
	//indeks, kt�ry b�dzie przypisywany sekcji siatki wielok�t�w
	int32 index = FindFirstFreeInt(meshGenerator->GetSectionIds(0));
	//Zmienna pomocnicza, pusty zbi�r dla pozosta�ych kana��w UV sekcji
	TArray<FVector2D> emptyUVs = TArray<FVector2D>();
	//Dane o sekcji siatki wielok�t�w
	FChunkData tmp = FChunkData(index, emptyarr);
	//Przekazywanie danych do komponentu
	meshGenerator->CreateSectionFromComponents(0,index,0,verts,
		tris,TArray<FVector>(),UV0,UVB,
		emptyUVs,emptyUVs,TArray<FColor>(),
		TArray<FRuntimeMeshTangent>());

	//Dodanie wpisu o nowej sekcji siatki wielok�t�w
	ChunkMap.Add(chunk, tmp);
}


// Metoda Generuj�ca teren wzgl�dem kursora b�d�cego postaci�
void AProceduralTerrainGenerator::TrackCharacter()
{
	if(trackedCharacter) //Wykonuje poni�sz� instrukcj� je�li kursor jest ustawiony
	{
		//Ustalenie koordynat�w sekcji terenu, na kt�rej kursor(posta�) si� znajduje
		FIntPoint charChunk = FIntPoint(
			(int32)trackedCharacter->GetActorLocation().X / chunkSize,
			(int32)trackedCharacter->GetActorLocation().Y / chunkSize
		);
		//Je�li koordynaty si� zmieni�y od ostatniej kratki symulacji, rozpocznij modyfikacj� siatki
		if(charChunk!=lastCharChunk)
		{
			lastCharChunk = charChunk;
			//Tworzenie zbioru koordynat�w segment�w, kt�re powinny by� wygenerowane
			TArray<FIntPoint> chunksToAdd;
			for(int32 x =-(int32)renderDistanceInChunks;x <= (int32)renderDistanceInChunks;x++)
			{
				for (int32 y = -(int32)renderDistanceInChunks; y <= (int32)renderDistanceInChunks; y++)
				{
					chunksToAdd.Add(FIntPoint(x, y) + charChunk);
				}
			}


			//Zbi�r segment�w, kt�re zosta�y ju� wygenerowane
			TArray<FIntPoint> keys;
			ChunkMap.GetKeys(keys);
			for(int i = 0; i<keys.Num();i++)
			{
				//Usuwanie segment�w kt�re s� za daleko
				if (!chunksToAdd.Contains(keys[i])) RemoveChunk(keys[i]);
			}

			for(int i = 0;i< chunksToAdd.Num();i++)
			{
				//Tworzenie segment�w, kt�re nie zosta�y jeszcze wygenerowane, a powinny
				if(!ChunkMap.Contains(chunksToAdd[i])) CreateChunk(chunksToAdd[i]);
			}
		}
	}
}

float AProceduralTerrainGenerator::WeightInterpolation(float A, float valueA,
	float B, float valueB, float alpha)
{
	//przypisywanie warto�ci alpha, kt�ra pos�u�y do liniwoej interpolacji 
	alpha = FMath::Clamp(
		UKismetMathLibrary::NormalizeToRange(alpha, valueA, valueB),
		0.0f, 1.0f);
	//zwraca wynik interpolacji
	return FMath::Lerp(A, B, alpha);
}
float AProceduralTerrainGenerator::BiomeDeform(FVector2D vert, EBiomeType biome)
{
	//Dob�r wysoko�ci punktu wzgl�dem biomu
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




//Metoda przypisuj�ca odpowiedni� wysoko�� punktowi wzgl�dem warto�ci biomu
float AProceduralTerrainGenerator::MapBiome(FVector2D pos, float biome)
{
	if (biome <= 0.12f)//Interpolacja pomi�dzy biomem morza a pla�y
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::SEA),
			0.f, BiomeDeform(pos, EBiomeType::BEACH), 0.12f, biome);
	}
	else if (biome <= 0.5f)//Interpolacja  pomi�dzy biomem pla�y a step�w
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::BEACH),
			0.12f, BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, biome);
	}
	else if (biome <= 0.9f)//Interpolacja pomi�dzy biomem step�w a g�r
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::PLAINS),
			0.5f, BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, biome);
	}
	else //Interpolacja pomi�dzy biomem g�r a szczyt�w
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

//Metoda rozk��daj�ca aktor�w po terenie
void AProceduralTerrainGenerator::GetActorOnPoint(FVector& loc, int32 vertIndex, float biome)
{
	//Zapobieganie duplikatom aktor�w w punktach kra�cowych segmentu
	if(vertIndex % chunkResolution != 0 && vertIndex / chunkResolution != 0)	
		//Iterowanie po ka�dym potencjalnym aktorze do utworzenia
		for(int i = 0;i<structurePlacement.Num();i++)
	{
		FStructurePlacementData& structure = structurePlacement[i];
		if
			(
				//Por�wnanie warto�ci szumu z warto�ci� krzywej dla biomu
				USimplexNoiseBPLibrary::SimplexNoiseInRange2D(loc.X,loc.Y,0,1) 
				<= 
				structure.PlacementCurve->GetFloatValue(biome)

				&&

				//Por�wnanie indeksu punktu z jego odst�pem 
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
