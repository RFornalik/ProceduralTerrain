// Fill out your copyright notice in the Description page of Project Settings.


#include "FChunkMachine.h"
//#include "RuntimeMeshLibrary.h"
#include "SimplexNoiseBPLibrary.h"
#include "Math.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralTerrainGenerator.h"




#pragma region GameThread
FChunkMachine::FChunkMachine()
{
}
FChunkMachine::FChunkMachine(FIntPoint chunkCoords, uint32 LOD, AProceduralTerrainGenerator* _parent)
{
	Parent = _parent;


	chunk = chunkCoords;
	chunkResolution = Parent->chunkResolution / (1 + LOD);
	chunkSize = Parent->chunkSize;
	noiseScale = Parent->noiseScale;
	biomeScale = Parent->biomeScale;
	heightScale = Parent->heightScale;

	ChunkThread = FRunnableThread::Create(this, TEXT("new Chunk"));

}

FChunkMachine::~FChunkMachine()
{
		ChunkThread->Kill();
		delete ChunkThread;
}

#pragma endregion

bool FChunkMachine::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("thread has been initialized"));

		return true;
}


uint32 FChunkMachine::Run()
{

	float step = chunkSize / (chunkResolution - 1);

	//URuntimeMeshLibrary::Create
	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution + 2, chunkResolution + 2, tris, verts, UV0, step);
	UV_Biome.Reserve(UV0.Num());
	float biome;

	for (int i = 0, x, y; i < verts.Num(); i++)
	{
		x = chunk.X * chunkSize;
		y = chunk.Y * chunkSize;
		verts[i].X += x;
		verts[i].Y += y;


		biome = USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(verts[i].X / biomeScale, verts[i].Y / biomeScale, 2.3f, 0.6f, 4, 1, true);
		UV_Biome.Add(FVector2D(biome));

		verts[i].Z+=MapBiome(FVector2D(verts[i].X / noiseScale, verts[i].Y / noiseScale),biome)*heightScale;








	}


	TArray<FVector> emptyVector;
	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution, chunkResolution, tris, emptyVector, UV0, step);


	bIsChunkReady = true;
	UE_LOG(LogTemp, Warning, TEXT("thread has done Mesh Generation"));
	while (run)
	{
		FPlatformProcess::Sleep(0.01f);
	}
	FPlatformProcess::Sleep(0.01f);
	return 0;
}


// This function is NOT run on the new thread!
void FChunkMachine::Stop()
{
	run = false;

}





//Biome Math



float FChunkMachine::WeightInterpolation(float A, float valueA, float B, float valueB, float alpha)
{
	alpha = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(alpha, valueA, valueB), 0.0f, 1.0f);

	return FMath::Lerp(A, B, alpha);
}
float FChunkMachine::BiomeDeform(FVector2D vert, EBiomeType biome)
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
		return BiomeDeform(vert, EBiomeType::MOUNTAINS) + 1000 + (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X * 2, vert.Y * 2, 2.3f, 0.6f, 3, 1, true)) * 500;
	}
	case EBiomeType::STD:
	{
		return USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X * 16, vert.Y * 16, 2.3f, 0.6f, 3, 1, true) * 8;
	}
	default:
		return 0;
	}
}





float FChunkMachine::MapBiome(FVector2D pos, float biome)
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