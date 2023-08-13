#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPUNREALINTRO_API URotatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	URotatorComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RotationSpeed;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
