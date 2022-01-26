// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "ProceduralTerrainGenerator.h"
#include "ProceduralMeshComponent.h"
#include "RuntimeMeshCore.h"
/**
 * 
 */
class PROCEDURALTERRAINGEN_API FChunkMachine : FRunnable
{
public:
	FChunkMachine();
	virtual ~FChunkMachine() override;

	bool bIsChunkReady = false;

	TArray<FVector> verts;//, normals;
	TArray<int32> tris;
	TArray<FVector2D> UV0, UV_Biome;
	//TArray<FRuntimeMeshTangent> tangents;

	FChunkMachine(FIntPoint chunkCoords, uint32 LOD, class AProceduralTerrainGenerator* _parent);
	bool Init() override; 
	uint32 Run() override; 
	void Stop() override; 





private:
	FRunnableThread* ChunkThread;
	class AProceduralTerrainGenerator* Parent;
	FIntPoint chunk;
	float chunkSize;
	uint32 chunkResolution;
	float biomeScale;
	float noiseScale;
	float heightScale;
	bool run = true;


	static float BiomeDeform(FVector2D vert, EBiomeType biome);
	static float MapBiome(FVector2D pos, float biome);
	static float WeightInterpolation(float A, float valueA, float B, float valueB, float alpha);


	//WIP





};
