// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheFatFightGameMode.h"
#include "TheFatFightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheFatFightGameMode::ATheFatFightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
