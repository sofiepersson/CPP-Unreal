#include "RotatorComponent.h"

URotatorComponent::URotatorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void URotatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	auto Owner = GetOwner();
	auto Rotator = FRotator(0.f, RotationSpeed * DeltaTime, 0.f);

	Owner->AddActorLocalRotation(Rotator);
}
