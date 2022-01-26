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
	meshGenerator->DisableNormalTangentGeneration();
	meshGenerator->SetupMaterialSlot(3, "MatSlot", material);


	
	



}

// Called when the game starts or when spawned
void AProceduralTerrainGenerator::BeginPlay()
{
	Super::BeginPlay();
	meshGenerator->EnableNormalTangentGeneration();
	//trackedCharacter->CustomTimeDilation = 0.0f;

	
}

// Called every frame
void AProceduralTerrainGenerator::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	TrackCharacter();
	CatchChunks();
}



void AProceduralTerrainGenerator::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	USimplexNoiseBPLibrary::setNoiseSeed(noiseSeed);
	TArray<FIntPoint> keys;
	ChunkMap.GetKeys(keys);
	
	FRuntimeMeshCollisionSettings settings;
	settings.bUseAsyncCooking = true;
	settings.bUseComplexAsSimple = true;
	meshGenerator->SetCollisionSettings(settings);
	meshGenerator->SetRenderableLODForCollision(0);
	while(ChunkMap.Num()>0)
	{
		meshGenerator->ClearSection(0, ChunkMap.FindAndRemoveChecked(keys[0]));
	}
	
	meshGenerator->RemoveAllSectionsForLOD(0);

	
	ChunkMap.Empty();
	for (int i = 0; i < chunks.Num(); i++)
	{
		CreateChunk(chunks[i]);
	}

}

bool AProceduralTerrainGenerator::CreateChunk(FIntPoint coordinates)
{

	if (ChunkMap.Contains(coordinates) ||  chunkResolution<2) return false;
	if (threads.Contains(coordinates)) 
	{
		delete threads.FindAndRemoveChecked(coordinates);
		threadMap.Remove(coordinates);
	} 

	FChunkMachine* threadedChunk = new FChunkMachine(coordinates, 0 ,this);
	threads.Add(coordinates, threadedChunk);
	threadMap.Add(coordinates);

	return true;
}

bool AProceduralTerrainGenerator::RemoveChunk(FIntPoint coordinates)
{
	if (!ChunkMap.Contains(coordinates)) return false;
	meshGenerator->ClearSection(0, ChunkMap.FindAndRemoveChecked(coordinates));

	return true;
}


void AProceduralTerrainGenerator::ReceiveChunk(FIntPoint chunk, TArray<FVector>& verts, TArray<int32>& tris,
	TArray<FVector2D>& UV0, TArray<FVector2D>& UVB)
{
	int32 index = meshGenerator->GetSectionIds(0).Num();
	TArray<FVector2D> emptyUVs = TArray<FVector2D>();
	FIntPoint tmpDiff = chunk - lastCharChunk;
	int32 dist = FMath::Abs(tmpDiff.X) + FMath::Abs(tmpDiff.Y);
	meshGenerator->CreateSectionFromComponents(0,index,3,verts,tris,TArray<FVector>(),UV0,UVB,emptyUVs,emptyUVs,TArray<FColor>(),TArray<FRuntimeMeshTangent>());
	meshGenerator->SetMaterial(3,material);
	ChunkMap.Add(chunk, index);
	meshGenerator->SetRenderableSectionAffectsCollision(index, dist <= 2);
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
		if(
			charChunk!=lastCharChunk || 
			((ChunkMap.Num() + threads.Num() ) != (renderDistanceInChunks * 2 + 1)*(renderDistanceInChunks * 2 + 1))
			)
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
			for (int i=0;i<keys.Num();i++)
			{
				if (!chunksToAdd.Contains(keys[i])) RemoveChunk(keys[i]);
				else 
				{
					FIntPoint tmpDiff = keys[i] - charChunk;
					int distance = FMath::Abs(tmpDiff.X) + FMath::Abs(tmpDiff.Y);
					if (meshGenerator->GetSectionsForMeshCollision().Contains(*ChunkMap.Find(keys[i])) != distance <= 2)
					{
						meshGenerator->SetRenderableSectionAffectsCollision(*ChunkMap.Find(keys[i]), distance <= 2);
					}
						
				}

			}
			keys.Empty();
			threads.GetKeys(keys);

			for (int i = 0; i < keys.Num(); i++)
			{
				if (!chunksToAdd.Contains(keys[i])) 
				{
					delete threads.FindAndRemoveChecked(keys[i]);
					threadMap.Remove(keys[i]);
				}

			}

			for(int32 i = 0; i< chunksToAdd.Num();i++)
			{
				if(!ChunkMap.Contains(chunksToAdd[i]))
				{
					if(!threads.Contains(chunksToAdd[i])) CreateChunk(chunksToAdd[i]);
				}
			}





		}
	}
}

void AProceduralTerrainGenerator::CatchChunks()
{
	TArray<FIntPoint> pendingChunks;
	threads.GetKeys(pendingChunks);
	if (pendingChunks.Num() == 0) return;
	FChunkMachine* checkedChunk;
	TArray<FVector> empty;
	TArray<FRuntimeMeshTangent> emptyt;
	int count = 0;
	for(int32 i = 0;i< pendingChunks.Num();i++)
	{
		checkedChunk = threads.FindRef(pendingChunks[i]);
		if(checkedChunk->bIsChunkReady)
		{
			count++;

		}

	}
	if(count == pendingChunks.Num() && pendingChunks.Num() != 0)
	{
		for(int32 i = 0; i < pendingChunks.Num(); i++)
		{
			checkedChunk = threads.FindRef(pendingChunks[i]);
			ReceiveChunk
			(
				pendingChunks[i],checkedChunk->verts,checkedChunk->tris,checkedChunk->UV0,checkedChunk->UV_Biome
			);
			delete checkedChunk;
		}
		threadMap.Empty();
		threads.Empty();
		meshGenerator->MarkCollisionDirty();
	

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Every Chunk Loaded, %d / %d"),count, pendingChunks.Num());
	}


}


