#include "Pickup.h"
#include "DrawDebugHelpers.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RotatorComponent = CreateDefaultSubobject<URotatorComponent>(TEXT("Rotator"));
}

void APickup::Interact()
{
	DrawDebugString(GetWorld(), FVector(100, 100, 0), "Picked it up!", nullptr, FColor::Red, 1);
	Destroy();
}

