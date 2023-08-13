#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPointObject.generated.h"
#include "SpawnManager.h"

UCLASS(BlueprintType, Blueprintable)
class CPPUNREALINTRO_API ASpawnPointObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnPointObject();

	float Radius{ 200 };
	int NumberOfSpawns{ 3 };

private:
	SpawnManager* SpawnManager;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
