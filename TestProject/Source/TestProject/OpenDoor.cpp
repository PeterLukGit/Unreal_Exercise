// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"//Actor頭文件
#include "Components/PrimitiveComponent.h"//主組件
#include "Engine/World.h"//拿取世界函式頭文件


// Sets default values for this component's properties
//該腳本的建構子
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
//遊戲開始時，調用，跟建構子相比，建構子會先調用
//就是Unity Start
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();


	//得到所在的Actor 
	//Actor 概念 約等於 Unity的GameObject
	//AActor * Actor = GetOwner();

	//設定角度
	//FRotator( InPitch = Y軸,  InYaw = Z軸,  InRoll = X軸)
	//FRotator NewRotator = FRotator(0, 0, 0);

	//旋轉
	//要旋轉的話，要把Actor下面的 移動性改為可移動(預設是靜態)
	//Actor->SetActorRotation(NewRotator);

	//拿取物件
	Actor = GetOwner();

	//拿取腳色控制器
	DefaulPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	
	//這是輸出Unreal Log方法，要打開輸出日誌才看的到
	//LogTemp是類型，用LogTemp就OK
	//Log這個能再放 Warning、Error，指的是輸出時的狀態
	//TEXT(" %s message %s") 這格是要輸出的內容，當需要引入參數時就加上%s
	//印入的參數前面要加上 *
	UE_LOG(LogTemp, Log, TEXT(" %s message %s"), *Actor->GetName(), *DefaulPawn->GetName());

}


// Called every frame
//遊戲每禎調用
//就是Unity Update
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//nullptr意思是空指針
	//碰到Trigger後開門，並記下時間
	//if (TriggerVolume!= nullptr && TriggerVolume->IsOverlappingActor(DefaulPawn))
	//{
	//	LastDoorOpenTiom = GetWorld()->GetTimeSeconds();
	//	OpenDoor();
	//}


	//if (TriggerVolume != nullptr && GetTotalMessInTrigger() >= 20)
	//{
	//	LastDoorOpenTiom = GetWorld()->GetTimeSeconds();
	//	//OpenDoor();//開門 C++版
	//	OnOpen.Broadcast();//開門，藍圖版
	//}

	////時間到，關門
	//if (GetWorld()->GetTimeSeconds() - LastDoorOpenTiom > DoorOpenDuration)
	//{
	//	//CloseDoor();
	//	OnClose.Broadcast();//關門，藍圖版
	//}

	if (TriggerVolume != nullptr && GetTotalMessInTrigger() >= 20)
	{
		OnOpen.Broadcast();//開門，藍圖版
	}
	else
	{
		OnClose.Broadcast();//關門，藍圖版
	}
}

void UOpenDoor::OpenDoor()
{
	//設定角度
//FRotator( InPitch = Y軸,  InYaw = Z軸,  InRoll = X軸)
	FRotator NewRotator = FRotator(0, 0, 0);

	//旋轉
	//要旋轉的話，要把Actor下面的 移動性改為可移動(預設是靜態)
	Actor->SetActorRotation(NewRotator);

	//OnOpen.Broadcast();
}

void UOpenDoor::CloseDoor()
{
	//設定角度
//FRotator( InPitch = Y軸,  InYaw = Z軸,  InRoll = X軸)
	FRotator NewRotator = FRotator(0, 90, 0);

	//旋轉
	//要旋轉的話，要把Actor下面的 移動性改為可移動(預設是靜態)
	Actor->SetActorRotation(NewRotator);

	//OnClose.Broadcast();
}

float UOpenDoor::GetTotalMessInTrigger()
{
	TArray<AActor*> Actors;

	//如果Trigger裡沒東西 ， 跳出
	if (TriggerVolume == nullptr)return 0 ;

	//拿取Trigger裡東西
	TriggerVolume->GetOverlappingActors(OUT Actors);

	float TotalMess = 0;

	//Trigger 重量相加
	for (const auto& Actor : Actors )
	{
		TotalMess += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	//UE_LOG(LogTemp, Log, TEXT("總重量 : %f "), TotalMess);
	return TotalMess;
}

