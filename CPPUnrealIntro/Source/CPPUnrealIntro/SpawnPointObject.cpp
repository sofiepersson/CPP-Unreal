#include "SpawnPointObject.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SpawnManager.h"
#include "Math/UnrealMathUtility.h"

ASpawnPointObject::ASpawnPointObject()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawnPointObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UKismetSystemLibrary::DrawDebugCircle(this, this->GetActorLocation(), Radius, 32, FLinearColor::Red, 1, 1, FVector(1, 0, 0), FVector(0, 1, 0), false);
}

void ASpawnPointObject::LoadActorClass()
{
	LoadedObject = ActorClass.LoadSynchronous();
	if (!LoadedObject)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load class from soft pointer."));
	}
}

