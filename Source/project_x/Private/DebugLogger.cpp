// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugLogger.h"

// Sets default values
ADebugLogger::ADebugLogger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADebugLogger::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("DEBUG LOG RUNNING"));

}

void ADebugLogger::PrintWarning(FString fstringVar)
{
	UE_LOG(LogTemp, Warning, TEXT("Text, %s"), *fstringVar);
	UE_LOG(LogTemp, Warning, TEXT("asdsdasdasdasdasdasda"));

}

// Called every frame
void ADebugLogger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

