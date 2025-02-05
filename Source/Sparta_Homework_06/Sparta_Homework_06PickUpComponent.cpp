// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sparta_Homework_06PickUpComponent.h"

USparta_Homework_06PickUpComponent::USparta_Homework_06PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void USparta_Homework_06PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &USparta_Homework_06PickUpComponent::OnSphereBeginOverlap);
}

void USparta_Homework_06PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ASparta_Homework_06Character* Character = Cast<ASparta_Homework_06Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
