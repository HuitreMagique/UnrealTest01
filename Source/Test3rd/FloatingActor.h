// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class TEST3RD_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();
	//Multiplies the sin
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector locationMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator rotationMultiplier;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	float RunningTime;
};
