// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"//滑鼠事件
#include "PhysicsEngine/PhysicsHandleComponent.h"//PhysicsHandle事件
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTPROJECT_API UGrabber : public UActorComponent
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

	//Ray射線
	FVector GetLineStart();
	FVector GetLineEnd();
	FHitResult  LineTrace();

	//輸入
	UInputComponent * InputComponent= nullptr;

	//抓取物件上的組件
	UPhysicsHandleComponent * PhysicsHandler = nullptr;

	//抓
	void Grab();
	//放開
	void Release();
};
