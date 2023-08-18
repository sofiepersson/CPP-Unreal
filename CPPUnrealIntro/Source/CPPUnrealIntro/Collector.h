// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpawnManager.h"
#include "Components/ActorComponent.h"
#include "Collector.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPUNREALINTRO_API UCollector : public UActorComponent
{
	GENERATED_BODY()

private:
	UCollector();

	float PickupRadius{150};

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
