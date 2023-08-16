#include "SpawnManager.h"

void USpawnManager::Spawn(FVector SpawnLocation, UClass* LoadedObject)
{
	FActorSpawnParameters SpawnParams;
	auto NewInstance = GetWorld()->SpawnActor<AMyActor>(LoadedObject);
	NewInstance->SetActorLocation(SpawnLocation);
	SpawnedObjects.Add(NewInstance);
}
