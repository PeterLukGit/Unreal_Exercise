// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"//Trigger頭文件
#include "OpenDoor.generated.h"

//設定事件
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTPROJECT_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void OpenDoor();
	void CloseDoor();

	//開門事件，藍圖用
	UPROPERTY(BlueprintAssignable)
	FDoorEvent OnOpen;
	
	//關門事件，藍圖用
	UPROPERTY(BlueprintAssignable)
	FDoorEvent OnClose;
		
private:

	//得到所在的Actor 
	AActor * Actor;
	
	//Trigger組件
	//UPROPERTY(EditAnywhere)的概念，跟Unity serializable概念差不多
	//就是讓變數顯示在編輯面板上
	UPROPERTY(EditAnywhere)
	ATriggerVolume*  TriggerVolume;

	//Unreal開始時，新增的腳色控制器
	AActor* DefaulPawn;

	//門開啟持續時間
	float DoorOpenDuration = 1;
	//門開啟時間
	float LastDoorOpenTiom = 0;

	//有多少重量在Trigger裡，超過就開門
	float GetTotalMessInTrigger();
	
};
