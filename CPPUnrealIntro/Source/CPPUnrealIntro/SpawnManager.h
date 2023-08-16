#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
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
	TArray<AMyActor*> SpawnedObjects;

public:
	UFUNCTION(BlueprintCallable, Category = "SpawnManager")
		void Spawn(FVector SpawnLocation, UClass* LoadedObject);
};
