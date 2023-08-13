#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "Subsystems/WorldSubsystem.h"
#include "SpawnManager.generated.h"

/**
 * 
 */
UCLASS()
class CPPUNREALINTRO_API USpawnManager : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	TArray<AMyActor*> SpawnedObjects{};

public:
	void Spawn(FVector SpawnLocation);
};
