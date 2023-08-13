#pragma once

#include "CoreMinimal.h"
#include "RotatorComponent.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS(BlueprintType, Blueprintable)
class CPPUNREALINTRO_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	URotatorComponent* RotatorComponent;
};
