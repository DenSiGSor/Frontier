// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Frontier.h"
#include "FrontierGameMode.h"
#include "FrontierPlayerController.h"
#include "FrontierCharacter.h"

AFrontierGameMode::AFrontierGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// use our custom PlayerController class
	PlayerControllerClass = AFrontierPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}