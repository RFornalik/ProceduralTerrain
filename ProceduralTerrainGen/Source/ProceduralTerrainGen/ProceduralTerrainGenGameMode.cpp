// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProceduralTerrainGenGameMode.h"
#include "ProceduralTerrainGenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProceduralTerrainGenGameMode::AProceduralTerrainGenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
