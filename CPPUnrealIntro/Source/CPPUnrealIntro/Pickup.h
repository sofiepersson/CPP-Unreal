// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RotatorComponent.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class CPPUNREALINTRO_API APickup : public AActor, public IInteractable
{
	GENERATED_BODY()

protected:
	APickup();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		URotatorComponent* RotatorComponent;

	virtual void Interact() override;
};
