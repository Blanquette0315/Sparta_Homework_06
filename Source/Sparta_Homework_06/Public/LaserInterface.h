// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LaserInterface.generated.h"

class ALaser;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULaserInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SPARTA_HOMEWORK_06_API ILaserInterface
{
	GENERATED_BODY()

public:
	virtual ALaser* LaserBounce(ALaser* LaserHit, bool HitResponse, const FHitResult& HitInformation) = 0;
};