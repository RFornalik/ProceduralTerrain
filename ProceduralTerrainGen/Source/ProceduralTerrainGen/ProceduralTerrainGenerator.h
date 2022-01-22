// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
		TArray<FVector> debugvectors;
	UPROPERTY(EditAnywhere, Category = "Debug")
		TArray<FIntPoint> chunks;



	UPROPERTY()
		class UProceduralMeshComponent* meshGenerator;
	UPROPERTY(VisibleAnywhere, Category = "WorldGeneration")
		TMap<FIntPoint, int32> ChunkMap;

	UPROPERTY(EditAnywhere, Category = "Visual")
		UMaterialInterface* material;

	
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool CreateChunk(FIntPoint coordinates);
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool RemoveChunk(FIntPoint coordinates);
	UFUNCTION()
		float BiomeDeform(FVector2D vert, EBiomeType biome);


		float MapBiome(FVector2D pos,float biome);
		float WeightInterpolation(float A, float valueA, float B, float valueB, float alpha, float tolerance);

	
	virtual void OnConstruction(const FTransform& Transform) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
