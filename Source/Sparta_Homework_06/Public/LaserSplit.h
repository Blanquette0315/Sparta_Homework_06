#pragma once

#include "CoreMinimal.h"
#include "LaserInterface.h"
#include "Laser_Parents.h"
#include "Components/ArrowComponent.h"
#include "LaserSplit.generated.h"

UCLASS()
class SPARTA_HOMEWORK_06_API ALaserSplit : public ALaser_Parents, public ILaserInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LaserSpawner|Properties" , Meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ALaser> BPLaserRef;
	
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="LaserSplit|Components")
	UArrowComponent* ArrowComp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="LaserSplit|Properties")
	int SpawnLaserCount;

public:	
	ALaserSplit();

protected:
	virtual void BeginPlay() override;

	void SpawnSplitLaser(ALaser* LaserHit);
	
public:	
	virtual void Tick(float DeltaTime) override;

	virtual ALaser* LaserBounce(ALaser* LaserHit, bool HitResponse, const FHitResult& HitInformation) override;
};
