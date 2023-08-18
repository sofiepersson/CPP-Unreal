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

public:
	TArray<APickup*> SpawnedObjects;

	UFUNCTION(BlueprintCallable, Category = "SpawnManager")
		void Spawn(FVector SpawnLocation, UClass* LoadedObject);
};
