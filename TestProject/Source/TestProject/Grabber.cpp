// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"
#include "Engine/World.h"//拿取世界函式頭文件
#include "DrawDebugHelpers.h"//繪製線條
#include "Components/PrimitiveComponent.h"//主組件


// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...

	PhysicsHandler = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (InputComponent !=nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Input 找到"));
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input 沒找到"));
	}

}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//當PhysicsHandler有數據時，將抓取設定位置
	if (PhysicsHandler && PhysicsHandler->GrabbedComponent)
	{
		//將物件抓取，並把位置設定到Ray終點
		PhysicsHandler->SetTargetLocation(GetLineEnd());
	}

	//繪製線
	DrawDebugLine(GetWorld(), GetLineStart(), GetLineEnd(), FColor(255, 0, 0), false, 0, 0, 10);
	

}

//Ray起點
FVector UGrabber::GetLineStart()
{
	FVector start;
	FRotator viewRotator;

	//拿取腳色控制器的視角位置
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(start, viewRotator);

	//UE_LOG(LogTemp, Log, TEXT("start  X:%f Y:%f Z:%f"), start.X, start.Y, start.Z);
	//UE_LOG(LogTemp, Log, TEXT("viewRotator  X:%f Y:%f Z:%f"), viewRotator.Roll, viewRotator.Pitch, viewRotator.Yaw);

	return start;
}

//Ray終點
FVector UGrabber::GetLineEnd()
{
	FVector start;
	FRotator viewRotator;

	//拿取腳色控制器的視角位置
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(start, viewRotator);

	//viewRotator.Vector 指的是該視野方向往前的向量
	FVector end = start + viewRotator.Vector() * 100;

	return end;
}

//射出Ray
FHitResult  UGrabber::LineTrace()
{
	FHitResult hit;

	//射出Ray
	GetWorld()->LineTraceSingleByObjectType(
		hit,
		GetLineStart(),
		GetLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);

	AActor * actor = hit.GetActor();

	if (actor != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT(" Line Hit %s"), *actor->GetName());
	}
	return hit;
}

//抓起物件
void UGrabber::Grab()
{
	UE_LOG(LogTemp, Warning, TEXT("滑鼠 按下"));

	//Ray碰到物件
	FHitResult hit = LineTrace();

	//放置組件
	UPrimitiveComponent * Component = hit.GetComponent();

	if (hit.GetActor() && PhysicsHandler != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Grab"));

		//GrabComponentAtLocation在給定位置抓取指定的組件。
		PhysicsHandler->GrabComponentAtLocationWithRotation(
			Component,
			NAME_None,
			Component->GetOwner()->GetActorLocation(),
			GetOwner()->GetActorRotation()
		);
	}

}

void UGrabber::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("滑鼠 彈起"));

	if (PhysicsHandler)
	{
		PhysicsHandler->ReleaseComponent();
	}
}

