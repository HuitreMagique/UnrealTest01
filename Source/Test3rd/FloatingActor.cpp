// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float sin = FMath::Sin(RunningTime + DeltaTime);//(FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation = FVector( NewLocation + FVector( sin * locationMultiplier.X, sin * locationMultiplier.Y, sin * locationMultiplier.Z ));
	NewRotation= FRotator( NewRotation + FRotator(sin * rotationMultiplier.Pitch, sin * rotationMultiplier.Roll, sin * rotationMultiplier.Yaw));
	RunningTime += DeltaTime;

	SetActorLocation(NewLocation);
	SetActorRotation(NewRotation);
	
}

