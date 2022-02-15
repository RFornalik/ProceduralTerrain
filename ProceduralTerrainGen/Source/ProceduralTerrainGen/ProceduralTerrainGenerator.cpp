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
	PrimaryActorTick.bCanEverTick = true;
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

	Super::Tick(DeltaTime);
	if(bRun)TrackCharacter();
	for (int32 i = 0; i < spawnSpeed && actorsToDestroy.Num()>0; i++)
	{
		actorsToDestroy[0]->Destroy();
		actorsToDestroy.RemoveAt(0);
	}
	for(int32 i = 0; i<spawnSpeed && actorsToAdd.Num()>0; i++)
	{
		FQueuedActor& actorToAdd = actorsToAdd[0];
		if (ChunkMap.Contains(actorToAdd.Chunk))
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



void AProceduralTerrainGenerator::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	USimplexNoiseBPLibrary::setNoiseSeed(noiseSeed);
}

bool AProceduralTerrainGenerator::CreateChunk(FIntPoint coordinates)
{
	if (chunkResolution < 2) return false;
	bool bCreateWater = false;
	TArray<FVector> verts;
	TArray<int32> tris;
	TArray<FVector2D> UV0, UV_Biome;
	TArray<AActor*> structs;
	float step = chunkSize / (chunkResolution - 1);
	float biome;


	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution, chunkResolution, tris, verts, UV0, step);
	UV_Biome.Reserve(UV0.Num());
	int32 x = coordinates.X * chunkSize;
	int32 y = coordinates.Y * chunkSize;
	for (int32 i = 0; i < verts.Num(); i++)
	{
		FVector& vert = verts[i];

		vert.X += x;
		vert.Y += y;

		biome = USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X / biomeScale, vert.Y / biomeScale, 2.3f, 0.6f, 4, 1, true);

		UV_Biome.Add(FVector2D(biome));

		vert.Z += MapBiome(FVector2D(vert.X / noiseScale, vert.Y / noiseScale), biome) * heightScale;
		if (!bCreateWater)bCreateWater = (vert.Z <= 0);

		GetActorOnPoint(vert, i, biome);
	}
	if (bCreateWater)actorsToAdd.Add(FQueuedActor(WaterBodyClass.Get(),FVector(x,y,0),FRotator(0,0,0),FVector(chunkSize/2,chunkSize/2,1),coordinates));
	ReceiveChunk(coordinates, verts, tris, UV0, UV_Biome, structs);
	return true;
}

bool AProceduralTerrainGenerator::RemoveChunk(FIntPoint coordinates)
{
	if (!ChunkMap.Contains(coordinates)) return false;
	FChunkData data = ChunkMap.FindRef(coordinates);
	actorsToDestroy.Append(data.placeableStructures);
	meshGenerator->GetProvider()->RemoveSection(0, data.meshSectionID);
	ChunkMap.Remove(coordinates);

	return true;
}


void AProceduralTerrainGenerator::ReceiveChunk(FIntPoint chunk, TArray<FVector>& verts, TArray<int32>& tris,
	TArray<FVector2D>& UV0, TArray<FVector2D>& UVB, TArray<AActor*>& structures)
{
	int32 index = FindFirstFreeInt(meshGenerator->GetSectionIds(0));
	TArray<FVector2D> emptyUVs = TArray<FVector2D>();
	FChunkData tmp = FChunkData(index, structures);
	meshGenerator->CreateSectionFromComponents(0,index,0,verts,tris,TArray<FVector>(),UV0,UVB,emptyUVs,emptyUVs,TArray<FColor>(),TArray<FRuntimeMeshTangent>());

	ChunkMap.Add(chunk, tmp);
}


// Function That Tracks Character to generate chunks where he goes
void AProceduralTerrainGenerator::TrackCharacter()
{
	if(trackedCharacter)
	{
		FIntPoint charChunk = FIntPoint(
			(int32)trackedCharacter->GetActorLocation().X / chunkSize,
			(int32)trackedCharacter->GetActorLocation().Y / chunkSize
		);
		if(charChunk!=lastCharChunk)
		{
			lastCharChunk = charChunk;
			TArray<FIntPoint> chunksToAdd;
			for(int32 x =-(int32)renderDistanceInChunks;x <= (int32)renderDistanceInChunks;x++)
			{
				for (int32 y = -(int32)renderDistanceInChunks; y <= (int32)renderDistanceInChunks; y++)
				{
					chunksToAdd.Add(FIntPoint(x, y) + charChunk);
				}
			}



			TArray<FIntPoint> keys;
			ChunkMap.GetKeys(keys);
			for(int i = 0; i<keys.Num();i++)
			{
				if (!chunksToAdd.Contains(keys[i])) RemoveChunk(keys[i]);
			}

			for(int i = 0;i< chunksToAdd.Num();i++)
			{
				if(!ChunkMap.Contains(chunksToAdd[i]))
				{
					CreateChunk(chunksToAdd[i]);
				}
			}
		}
	}
}

float AProceduralTerrainGenerator::WeightInterpolation(float A, float valueA, float B, float valueB, float alpha)
{
	alpha = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(alpha, valueA, valueB), 0.0f, 1.0f);

	return FMath::Lerp(A, B, alpha);
}
float AProceduralTerrainGenerator::BiomeDeform(FVector2D vert, EBiomeType biome)
{

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
		return BiomeDeform(vert, EBiomeType::STD) + 1000 + (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X, vert.Y, 2.3f, 0.6f, 3, 1, true)) * 500;
	}
	case EBiomeType::PEAKS:
	{
		return BiomeDeform(vert, EBiomeType::MOUNTAINS) + 1000 + (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X/2 , vert.Y/2, 2.3f, 0.6f, 3, 1, true)) * 250;
	}
	case EBiomeType::STD:
	{
		return USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X * 16, vert.Y * 16, 2.3f, 0.6f, 3, 1, true) * 8;
	}
	default:
		return 0;
	}
}





float AProceduralTerrainGenerator::MapBiome(FVector2D pos, float biome)
{
	if (biome <= 0.12f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::SEA), 0.f, BiomeDeform(pos, EBiomeType::BEACH), 0.12f, biome);
	}
	else if (biome <= 0.5f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::BEACH), 0.12f, BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, biome);
	}
	else if (biome <= 0.9f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, biome);
	}
	else
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, BiomeDeform(pos, EBiomeType::PEAKS), 1.f, biome);
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
void AProceduralTerrainGenerator::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	meshGenerator->DisableNormalTangentGeneration();

}
void AProceduralTerrainGenerator::GetActorOnPoint(FVector& loc, int32 vertIndex, float biome)
{
	if(vertIndex % chunkResolution != 0 && vertIndex / chunkResolution != 0)	
		for(int i = 0;i<structurePlacement.Num();i++)
	{
		FStructurePlacementData& structure = structurePlacement[i];
		if
			(
				USimplexNoiseBPLibrary::SimplexNoiseInRange2D(loc.X,loc.Y,0,1) <= structure.PlacementCurve->GetFloatValue(biome)

				&&

				vertIndex % structure.step == 0

			)
		{
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
