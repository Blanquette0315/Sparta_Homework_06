#pragma once

#include "CoreMinimal.h"
#include "LaserInterface.h"
#include "Laser_Parents.h"
#include "Components/ArrowComponent.h"
#include "LaserReflection.generated.h"

/**
 * 
 */
UCLASS()
class SPARTA_HOMEWORK_06_API ALaserReflection : public ALaser_Parents, public ILaserInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LaserReflection|Components")
	UArrowComponent* ArrowComp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LaserSpawner|Properties" , Meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ALaser> BPLaserRef;
	
public:	
	ALaserReflection();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	FRotator CalRotation(const FVector& ImpactPoint, const FVector& ImpactNormal, const FVector& TraceStart) const;

	void ClearAttachedLasers(const FString& ClearLaserID);
	virtual ALaser* LaserBounce(ALaser* LaserHit, bool HitResponse, const FHitResult& HitInformation) override;
};