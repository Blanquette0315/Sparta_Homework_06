#pragma once

#include "CoreMinimal.h"
#include "LaserInterface.h"
#include "Laser_Parents.h"
#include "LaserTarget.generated.h"

UCLASS()
class SPARTA_HOMEWORK_06_API ALaserTarget : public ALaser_Parents, public ILaserInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LaserTarget|Properties")
	FLinearColor BasicColor;
	
public:	
	ALaserTarget();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void PuzzleSolved(FLinearColor HitLaserColor);

	virtual ALaser* LaserBounce(ALaser* LaserHit, bool HitResponse, const FHitResult& HitInformation) override;
};
