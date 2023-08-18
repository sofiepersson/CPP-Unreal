#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Subsystems/WorldSubsystem.h"
#include "SpawnManager.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class CPPUNREALINTRO_API USpawnManager : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	TArray<APickup*> SpawnedObjects;

public:
	UFUNCTION(BlueprintCallable, Category = "SpawnManager")
		void Spawn(FVector SpawnLocation, UClass* LoadedObject);
};
