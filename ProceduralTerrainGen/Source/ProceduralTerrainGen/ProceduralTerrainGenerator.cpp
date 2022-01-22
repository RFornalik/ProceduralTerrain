// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTerrainGenerator.h"
#include "ProceduralMeshComponent.h"
#include "Math/IntPoint.h"
#include "DrawDebugHelpers.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "SimplexNoiseBPLibrary.h"

// Sets default values
AProceduralTerrainGenerator::AProceduralTerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshGenerator = CreateDefaultSubobject<UProceduralMeshComponent>("mesh");
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
}



void AProceduralTerrainGenerator::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	USimplexNoiseBPLibrary::setNoiseSeed(noiseSeed);
	meshGenerator->ClearAllMeshSections();
	
	ChunkMap.Empty();
	for (int i = 0; i < chunks.Num(); i++)
	{
		CreateChunk(chunks[i]);
	}

}

bool AProceduralTerrainGenerator::CreateChunk(FIntPoint coordinates)
{
	if (ChunkMap.Contains(coordinates) || chunkResolution<2) return false;


	TArray<FVector> verts, normals;
	TArray<int32> tris;
	TArray<FVector2D> UV0, UV_Biome;
//Debug
	debugvectors.Empty();

	float step = chunkSize / (chunkResolution-1);

	UKismetProceduralMeshLibrary::CreateGridMeshWelded(chunkResolution+2, chunkResolution+2, tris, verts, UV0, step);
	UV_Biome.Reserve(UV0.Num());
	float biome;
	for(int i = 0,x,y;i<verts.Num();i++)
	{
		x= coordinates.X * chunkSize;
		y= coordinates.Y * chunkSize;
		verts[i].X += x;
		verts[i].Y += y;


		biome=USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(verts[i].X /biomeScale, verts[i].Y /biomeScale,2.3f,0.6f,4, 1,true);
		UV_Biome.Add(FVector2D(biome));

		verts[i].Z=MapBiome(FVector2D(verts[i].X / noiseScale, verts[i].Y / noiseScale),biome);
		
		
		
		if(i<17)//Debug print
		{
			debugvectors.Add(verts[i]);
		}
	}





	meshGenerator->CreateMeshSection
	(
		meshGenerator->GetNumSections(),
		verts,
		tris,
		TArray<FVector>(),
		UV0,
		UV_Biome,
		TArray<FVector2D>(),
		TArray<FVector2D>(),
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true
	);
	



	ChunkMap.Add(coordinates, meshGenerator->GetNumSections() - 1);
	return true;
}

bool AProceduralTerrainGenerator::RemoveChunk(FIntPoint coordinates)
{
	if (!ChunkMap.Contains(coordinates)) return false;
	int32* tmp = ChunkMap.Find(coordinates);

	meshGenerator->ClearMeshSection(*tmp);

	ChunkMap.Remove(coordinates);
	return true;
}


float AProceduralTerrainGenerator::WeightInterpolation(float A, float valueA, float B, float valueB, float alpha, float tolerance)
{
	tolerance *= (valueB - valueA);
	valueA += tolerance;
	valueB -= tolerance;
	alpha = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(alpha, valueA, valueB), 0.0f, 1.0f);

	return FMath::Lerp(A, B, alpha);
}

float AProceduralTerrainGenerator::BiomeDeform(FVector2D vert, EBiomeType biome)
{

	switch (biome)
	{
	case EBiomeType::SEA:
	{
		return BiomeDeform(vert, EBiomeType::STD) - 900 * heightScale;
	}
	case EBiomeType::BEACH:
	{
		return BiomeDeform(vert, EBiomeType::STD) + 15 * heightScale;
	}
	case EBiomeType::PLAINS:
	{
		return BiomeDeform(vert, EBiomeType::STD) + 75 * heightScale;
	}
	case EBiomeType::MOUNTAINS:
	{
		return BiomeDeform(vert, EBiomeType::STD) + 2000 * heightScale + (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X,vert.Y,2.3f,0.6f,3,1,true)) * 1000 * heightScale;
	}
	case EBiomeType::PEAKS:
	{
		return BiomeDeform(vert, EBiomeType::MOUNTAINS) + 2000 * heightScale + (USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X*2, vert.Y*2, 2.3f, 0.6f, 3, 1, true)) * 1000 * heightScale;
	}
	case EBiomeType::STD:
	{
		return USimplexNoiseBPLibrary::GetSimplexNoise2D_EX(vert.X/16, vert.Y/16, 2.3f, 0.6f, 3, 1, true) * 64 *heightScale;
	}
	default:
		return 0;
	}
}





float AProceduralTerrainGenerator::MapBiome(FVector2D pos, float biome)
{
	if (biome <= 0.12f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::SEA), 0.f, BiomeDeform(pos, EBiomeType::BEACH), 0.12f, biome, noBlendZone);
	}
	else if (biome <= 0.5f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::BEACH), 0.12f, BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, biome, noBlendZone);
	}
	else if (biome <= 0.9f)
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::PLAINS), 0.5f, BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, biome, noBlendZone);
	}
	else
	{
		return WeightInterpolation(BiomeDeform(pos, EBiomeType::MOUNTAINS), 0.9f, BiomeDeform(pos, EBiomeType::PEAKS), 1.f, biome, noBlendZone);
	}

}



