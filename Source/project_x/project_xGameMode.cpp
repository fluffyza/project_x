// Copyright Epic Games, Inc. All Rights Reserved.

#include "project_xGameMode.h"
#include "project_xCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aproject_xGameMode::Aproject_xGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
