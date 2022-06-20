// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyDreamGameMode.h"
#include "MyDreamGameStateBase.h"
#include "MyDreamPlayerController.h"
#include "MyDreamPlayerState.h"
#include "MyDreamHUD.h"
#include "MyDreamSpectatorPawn.h"
#include "MyDreamCharacter.h"

AMyDreamGameMode::AMyDreamGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMyDreamCharacter::StaticClass();
	GameStateClass = AMyDreamGameStateBase::StaticClass();
	PlayerControllerClass = AMyDreamPlayerController::StaticClass();
	PlayerStateClass = AMyDreamPlayerState::StaticClass();
	HUDClass = AMyDreamHUD::StaticClass();
	SpectatorClass = AMyDreamSpectatorPawn::StaticClass();
}
void AMyDreamGameMode::BeginPlay()
{
	Super::BeginPlay();
}
