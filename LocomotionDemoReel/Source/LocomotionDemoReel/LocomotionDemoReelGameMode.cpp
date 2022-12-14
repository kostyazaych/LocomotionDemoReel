// Copyright Epic Games, Inc. All Rights Reserved.

#include "LocomotionDemoReelGameMode.h"
#include "LocomotionDemoReelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALocomotionDemoReelGameMode::ALocomotionDemoReelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/DefaultPacks/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
