// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshCore.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralTerrainGenerator.generated.h"

//Enumerator okre�laj�cy mo�liwe biomy
UENUM(BlueprintType)
enum class EBiomeType :uint8
{
	SEA = 0 UMETA(DisplayName = "SEA"), //Woda
	BEACH = 1 UMETA(DisplayName = "BEACH"), // Pla�a
	PLAINS = 2 UMETA(DisplayName = "PLAINS"), //Stepy, g��wna rze�ba terenu
	MOUNTAINS = 3 UMETA(DisplayName = "MOUNTAINS"), //G�ry
	PEAKS = 4 UMETA(DisplayName = "PEAKS"), //Szczyty
	STD = 5 UMETA(DisplayName = "STD") //Podstawowa deformacja terenu by poprawi� jego r�norodno��
};

//Struktura zawieraj�ca dane na temat jednego segmentu siatki wielok�t�w
USTRUCT()
struct FChunkData
{
	GENERATED_BODY()

	//ID Segmentu  siatki wielok�t�w tworzonego przez meshGenerator
	UPROPERTY(EditAnywhere, Category = "Properties")
	int32 meshSectionID;
	//Po�o�eni na ziemi aktorzy, zwani potocznie "strukturami"
	UPROPERTY(EditAnywhere, Category = "Properties")
	TArray<AActor*> placeableStructures;
	//Konstruktory
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
//Struktura zawieraj�ca dane o Aktorach kt�rzy s� generowani na tworzonej siatce
USTRUCT()
struct FStructurePlacementData
{
	GENERATED_BODY()
		//Klasa Aktora
	UPROPERTY(EditAnywhere, Category = "Properties")
		TSubclassOf<AActor> structureClass;
		//Rzadko�� wyst�powania tego Aktora, powinna by� mniejsza od kwadratu chunkResolution
	UPROPERTY(EditAnywhere, Category = "Properties")
		int32 step = 5;
	   //Krzywa odpowiadaj�ca za cz�sto�� wyst�powania Aktora wzgl�dem przypisanego biomu
	UPROPERTY(EditAnywhere, Category = "Properties")
		UCurveFloat* PlacementCurve;

};
//Aktor w kolejce do wygenerowania
USTRUCT()
struct FQueuedActor
{
	GENERATED_BODY()
		//Klasa Aktora
	UPROPERTY(EditAnywhere, Category = "Properties")
		UClass* StructClass;
		//Lokacja Aktora
	UPROPERTY(EditAnywhere, Category = "Properties")
		FVector Location;
		//Rotacja Aktora
	UPROPERTY(EditAnywhere, Category = "Properties")
		FRotator Rotation;
		//Skala Aktora
	UPROPERTY(EditAnywhere, Category = "Properties")
		FVector Scale;
		//Segment, siatki, na kt�ry aktor zostanie po�o�ony
	UPROPERTY(EditAnywhere, Category = "Properties")
		FIntPoint Chunk;
		//Konstruktory
	FQueuedActor()
	{
		StructClass = nullptr;
	}
	FQueuedActor(UClass* _class,FVector loc, FRotator rot,FIntPoint chunk)
	{
		StructClass = _class;
		Location = loc;
		Rotation = rot;
		Chunk = chunk;
		Scale = FVector(1, 1, 1);
	}
	FQueuedActor(UClass* _class, FVector loc, FRotator rot,FVector scale, FIntPoint chunk)
	{
		StructClass = _class;
		Location = loc;
		Rotation = rot;
		Chunk = chunk;
		Scale = scale;
	}

};

UCLASS()
class PROCEDURALTERRAINGEN_API AProceduralTerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	//Konstruktor
	AProceduralTerrainGenerator();

	//KOMPONENTY

	//Komponent odpowiedzialny za rysowanie siatki i kolizje
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
		class URuntimeMeshComponentStatic* meshGenerator;


	//ZMIENNE

	//G�sto�� siatki wielok�t�w w ka�dym segmencie siatki
	UPROPERTY(EditAnywhere, Category = "Properties")
		uint32 chunkResolution = 198;
	//Wielko�� ka�dego segmentu siatki
	UPROPERTY(EditAnywhere, Category = "Properties")
		float chunkSize = 200.0f;
	//Rozleg�o�� biom�w, s�u�y do kalkulacji skali
	UPROPERTY(EditAnywhere, Category = "Properties")
		float biomeScale = 1.0f;
	//G�sto�� szumu, okre�la jak rozmieszczone s� g�ry, wzniesienia i inne elementy biom�w
	UPROPERTY(EditAnywhere, Category = "Properties")
		float noiseScale = 1.0f;
	//Wsp�czynnik wysoko�ci generowanego terenu
	UPROPERTY(EditAnywhere, Category = "Properties")
		float heightScale = 1.0f;
	//Ziarno Generatora �wiata, ustala przebieg szumu
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Properties")
		int32 noiseSeed = 0;
	//Generowane przez generator obiekty w jednej kratce symulacji 
	//(Generacja tysi�ca obiekt�w w jednej kratce mo�e powa�nie zatrzyma� symulacj�)
	UPROPERTY(EditAnywhere, Category = "Properties")
		int32 spawnSpeed = 20;
	//Zasi�g rysowania siatki terenu (w segmentach)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties")
		int32 renderDistanceInChunks = 2;
	//Tablica zawieraj�ca dane nt. Generowanych struktur
	UPROPERTY(EditAnywhere, Category = "Properties")
		TArray<FStructurePlacementData> structurePlacement;
	//Klasa Aktora pe�ni�cego rol� wody
	UPROPERTY(EditAnywhere, Category = "Properties")
		TSubclassOf<AActor> WaterBodyClass;
	//Kursor lokacji wzgl�dem kt�rej generowana b�dzie siatka
	//(w tym przypadku posta� gracza)
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Properties")
		class ACharacter* trackedCharacter;



	//FUNKCJE GENERATORA

	//Funkcja tworz�ca segment siatki terenu w danych koordynatach
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool CreateChunk(FIntPoint coordinates);
	//Funkcja usuwaj�ca segment siatki terenu w danych koordynatach
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		bool RemoveChunk(FIntPoint coordinates);
	//Funkcja generuj�ca �wiat wzgl�dem kursora
	UFUNCTION()
		void TrackCharacter();

	//Inicjalizacja Aktora
	UFUNCTION(BlueprintCallable, Category = "World Generation")
		void Init();



protected:
	// Funkcja wywo�ywana po rozpocz�ciu gry
	virtual void BeginPlay() override;


public:	
	// Funkcja wywo�ywana co kratk� symulacji
	virtual void Tick(float DeltaTime) override;
private:


	//Deformacja danego punktu siatki
	static float BiomeDeform(FVector2D vert, EBiomeType biome);
	//Przypisanie Biomu dla danego punktu siatki
	static float MapBiome(FVector2D pos, float biome);
	//Interpolacja pomi�dzy Generowanymi biomami
	static float WeightInterpolation(float A, float valueA, float B, float valueB, float alpha);
	static int32 FindFirstFreeInt(TArray<int32> ints);
	void GetActorOnPoint(FVector& loc, int32 vertIndex, float biome);
	//Funkcja generuj�ca siatk�
	void ReceiveChunk(
		FIntPoint chunk,
		TArray<FVector>& verts,
		TArray<int32>& tris,
		TArray<FVector2D>& UV0,
		TArray<FVector2D>& UVB
	);
	//ZMIENNE
	
	// Aktualna pozycja Kursora, jako koordynaty segmentu siatki
	FIntPoint lastCharChunk = FIntPoint(-1, -1);
	//Zmienna okre�laj�ca czy generacja terenu zosta�a pomy�lnie zinicjalizowana
	bool bRun = false;
	//ZMIENNE POMOCNICZE

	//Zmienna Pomocnicza zbieraj�ca kolejk� Aktor�w do wygenerowania
	TArray<FQueuedActor> actorsToAdd;
	//Zmienna Pomocnicza zbieraj�ca kolejk� Aktor�w do usuni�cia
	TArray<AActor*> actorsToDestroy;
	//Zmienna Pomocnicza odpowiedzalna za zbieranie danych o siatce w segmencie
	TMap<FIntPoint, FChunkData> ChunkMap;
	
};
