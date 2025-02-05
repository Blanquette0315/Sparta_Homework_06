// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sparta_Homework_06GameMode.h"
#include "Sparta_Homework_06Character.h"
#include "UObject/ConstructorHelpers.h"

ASparta_Homework_06GameMode::ASparta_Homework_06GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
