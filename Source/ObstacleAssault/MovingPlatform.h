// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UPROPERTY(EditAnywhere)                  
	// float MyFloat = 0.0001;

	// UPROPERTY(EditAnywhere)
	// int32 MyInt= 99;

	// UPROPERTY(EditAnywhere)
	// bool MyBool = true;

	// UPROPERTY(EditAnywhere)
	// float MyFloat1 = 0;

	// UPROPERTY(EditAnywhere)
	// float MyFloat2 = 0;

	// UPROPERTY(EditAnywhere)
	// float APlusBFloat = 0;

	// UPROPERTY(EditAnywhere)
	// FVector MyVector = FVector(-14020.0,-2110.0,4056.0);

	// UPROPERTY(EditAnywhere)
	// float MyX = 0;

	// UPROPERTY(EditAnywhere)
	// float MyY = 0;

	// UPROPERTY(EditAnywhere)
	// float MyZ = 0;





	UPROPERTY(Editanywhere, Category="Moving Platform")
	FVector PlatformVelocity = FVector(100,0,0);
	FVector StartLocation;
	

	UPROPERTY(Editanywhere)
	float ActorDistance = 0;
};
