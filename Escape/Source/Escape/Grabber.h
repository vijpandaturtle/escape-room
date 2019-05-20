// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	// How far ahead of the player can we reach 
	float Reach = 100.f;
		
	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	
	UInputComponent* InputComponent = nullptr;

	//Ray-cast and grab what's in reach 
	void Grab();

	//Called when grab key is released 
	void Release();

	//Find attached physics handle component 
	void FindPhysicsHandleComponent();

	//Setup attached input component 
	void SetupInputComponent();

	//Return hit for first physics body in reach 
	const FHitResult GetFirstPhysicsBodyInReach();
	
	//Returns current start of reach 
	FVector GetReachLineStart();

	//Returns current end of reach 
	FVector GetReachLineEnd();
};