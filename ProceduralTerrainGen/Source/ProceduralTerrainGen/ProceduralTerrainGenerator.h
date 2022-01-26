// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshCore.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralTerrainGenerator.generated.h"

//Terrain Generation Enumerator, used for biomes and terrain pre-deformations.
UENUM(BlueprintType)
enum class EBiomeType :uint8
{
	SEA = 0 UMETA(DisplayName = "SEA"),
	BEACH = 1 UMETA(DisplayName = "BEACH"),
	PLAINS = 2 UMETA(DisplayName = "PLAINS"),
	MOUNTAINS = 3 UMETA(DisplayName = "MOUNTAINS"),
	PEAKS = 4 UMETA(DisplayName = "PEAKS"),
	STD = 5 UMETA(DisplayName = "STD") //basic Perlin Generation to pre-deform flat terrain.
};

UCLASS()
class PROCEDURALTERRAINGEN_API AProceduralTerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralTerrainGenerator();
	UPROPERTY(EditAnywhere, Category = "Properties")
		uint32 chunkResolution = 198;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float chunkSize = 200.0f;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float biomeScale = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float noiseScale = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float heightScale = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float noBlendZone = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Properties")
		int32 noiseSeed = 0;


	//DEBUG
	UPROPERTY(VisibleAnywhere, Category = "Debug")
		TArray<int32> debug;
	UPROPERTY(VisibleAnywhere, Category = "Debug")
		TArray<FIntPoint> threadMap;
	UPROPERTY(EditAnywhere, Category = "Debug")
		TArray<FIntPoint> chunks;



	UPROPERTY(EditAnywhere, Category = "Rendering")
		class URuntimeMeshComponentStatic* meshGenerator;
	//class UProceduralMeshComponent* meshGenerator;
	UPROPERTY(VisibleAnywhere, Category = "WorldGeneration")
		TMap<FIntPoint, int32> ChunkMap;

	UPROPERTY(EditAnywhere, Category = "Rendering")
		UMaterialInterface* material;
	UPROPERTY(EditAnywhere, Category = "Rendering")
		uint32 renderDistanceInChunks=2;
	UPROPERTY(EditAnywhere, Category = "Rendering")
		class ACharacter* trackedCharacter;
	

	
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool CreateChunk(FIntPoint coordinates);
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool RemoveChunk(FIntPoint coordinates);
	UFUNCTION()
		void TrackCharacter();
	UFUNCTION(CallInEditor)
		void CatchChunks();


	void ReceiveChunk(
		FIntPoint chunk,
		TArray<FVector>& verts,
		TArray<int32>& tris,

		TArray<FVector2D>& UV0,
		TArray<FVector2D>& UVB
	);



	
	virtual void OnConstruction(const FTransform& Transform) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FIntPoint lastCharChunk = FIntPoint(-1, -1);
	TMap<FIntPoint, class FChunkMachine*> threads;
};
