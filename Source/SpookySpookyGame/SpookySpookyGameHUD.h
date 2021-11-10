// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SpookySpookyGameHUD.generated.h"

UCLASS()
class ASpookySpookyGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASpookySpookyGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

