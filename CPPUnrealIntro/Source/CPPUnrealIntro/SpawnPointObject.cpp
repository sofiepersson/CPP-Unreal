// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPointObject.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ASpawnPointObject::ASpawnPointObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnPointObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnPointObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UKismetSystemLibrary::DrawDebugCircle(this, this->GetActorLocation(), Radius, 32, FLinearColor::Red, 1, 1, FVector(1, 0, 0), FVector(0, 1, 0), false);

}

