// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpookySpookyGameGameMode.h"
#include "SpookySpookyGameHUD.h"
#include "SpookySpookyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpookySpookyGameGameMode::ASpookySpookyGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpookySpookyGameHUD::StaticClass();
}
