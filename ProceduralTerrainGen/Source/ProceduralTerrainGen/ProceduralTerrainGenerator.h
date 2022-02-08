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

USTRUCT()
struct FChunkData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Properties")
	int32 meshSectionID;

	UPROPERTY(EditAnywhere, Category = "Properties")
	TArray<AActor*> placeableStructures;

	FChunkData()
	{
		meshSectionID = 0;
		placeableStructures = TArray<AActor*>();
	}
	FChunkData(int32 meshSection)
	{
		meshSectionID = meshSection;
		placeableStructures = TArray<AActor*>();
	}
	FChunkData(int32 meshSection, TArray<AActor*>& actors)
	{
		meshSectionID = meshSection;
		placeableStructures = actors;
	}
};
USTRUCT()
struct FStructurePlacementData
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "Properties")
		TSubclassOf<AActor> structureClass;
	UPROPERTY(EditAnywhere, Category = "Properties")
		int32 step = 5;
	UPROPERTY(EditAnywhere, Category = "Properties")
		UCurveFloat* PlacementCurve;

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
	UPROPERTY(EditAnywhere, Category = "Properties")
		TArray<FStructurePlacementData> structurePlacement;
	bool bRun = false;

	//DEBUG
	UPROPERTY(VisibleAnywhere, Category = "Debug")
		TArray<int32> debug;
	UPROPERTY(EditAnywhere, Category = "Debug")
		TArray<FIntPoint> chunks;



	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Rendering")
		class URuntimeMeshComponentStatic* meshGenerator;

	UPROPERTY(EditAnywhere, Category = "Rendering")
		uint32 renderDistanceInChunks=2;
	
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Properties")
		class ACharacter* trackedCharacter;

	UPROPERTY(VisibleAnywhere, Category = "World Generation")
		TMap<FIntPoint, FChunkData> ChunkMap;

	
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool CreateChunk(FIntPoint coordinates);
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool RemoveChunk(FIntPoint coordinates);
	UFUNCTION()
		void TrackCharacter();
	void ReceiveChunk(
		FIntPoint chunk,
		TArray<FVector>& verts,
		TArray<int32>& tris,
		TArray<FVector2D>& UV0,
		TArray<FVector2D>& UVB,
		TArray<AActor*>& structures
	);

	UFUNCTION(BlueprintCallable, Category = "World Generation")
		void Init();

	
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FIntPoint lastCharChunk = FIntPoint(-1, -1);
	TMap<FIntPoint, class FChunkMachine*> threads;
	static float BiomeDeform(FVector2D vert, EBiomeType biome);
	static float MapBiome(FVector2D pos, float biome);
	static float WeightInterpolation(float A, float valueA, float B, float valueB, float alpha);
	static int32 FindFirstFreeInt(TArray<int32> ints);
	AActor* GetActorOnPoint(FVector& loc, int32 vertIndex, float biome);
};
