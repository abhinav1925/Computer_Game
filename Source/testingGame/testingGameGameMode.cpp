// Copyright Epic Games, Inc. All Rights Reserved.

#include "testingGameGameMode.h"
#include "testingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestingGameGameMode::AtestingGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
