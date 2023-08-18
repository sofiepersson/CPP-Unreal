#pragma once

#include "CoreMinimal.h"
#include "SpawnManager.h"
#include "GameFramework/Actor.h"
#include "SpawnPointObject.generated.h"

UCLASS(BlueprintType, Blueprintable)
class CPPUNREALINTRO_API ASpawnPointObject : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnPointObject();

	float Radius{ 100 };
	int NumberOfSpawns{ 4 };

private:
	USpawnManager* SpawnManager;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<APickup> ActorClass;

	UPROPERTY(BlueprintReadWrite)
		UClass* LoadedObject;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void LoadActorClass();
};
