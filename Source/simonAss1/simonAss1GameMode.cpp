// Copyright Epic Games, Inc. All Rights Reserved.

#include "simonAss1GameMode.h"
#include "simonAss1Ball.h"

AsimonAss1GameMode::AsimonAss1GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AsimonAss1Ball::StaticClass();
}
