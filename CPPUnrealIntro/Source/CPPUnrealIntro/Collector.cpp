#include "Collector.h"
#include "Pickup.h"
#include "SpawnManager.h"

UCollector::UCollector()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCollector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//Find the pickup object that is closest to the player
	APickup* BestTarget{nullptr};
	float BestDistance{FLT_MAX};
	auto SpawnManager = GetWorld()->GetSubsystem<USpawnManager>();
	auto PotentialTargets = SpawnManager->SpawnedObjects;
	for (auto i = 0; i < PotentialTargets.Num(); ++i)
	{
		float Distance = FVector::Dist(PotentialTargets[i]->GetActorLocation(), GetOwner()->GetActorLocation());
		if (Distance < BestDistance) {
			BestDistance = Distance;
			BestTarget = PotentialTargets[i];
		}
	}
	if (BestDistance < PickupRadius)
		BestTarget->Interact();
}

