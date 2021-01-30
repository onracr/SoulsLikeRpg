// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoulsLikeRpgGameMode.h"
#include "SoulsLikeRpgCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoulsLikeRpgGameMode::ASoulsLikeRpgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/_Main/Player/BP_HeroCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
