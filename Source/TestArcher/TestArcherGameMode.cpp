// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestArcherGameMode.h"
#include "TestArcherCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestArcherGameMode::ATestArcherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
