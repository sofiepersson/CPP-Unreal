#include "SpawnPointObject.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SpawnManager.h"

ASpawnPointObject::ASpawnPointObject()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawnPointObject::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	if (World) {
		SpawnManager = World->GetSubsystem<SpawnManager>();
		if (SpawnManager) {
			SpawnManager->Spawn();
		}
	}
}

void ASpawnPointObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UKismetSystemLibrary::DrawDebugCircle(this, this->GetActorLocation(), Radius, 32, FLinearColor::Red, 1, 1, FVector(1, 0, 0), FVector(0, 1, 0), false);

}

