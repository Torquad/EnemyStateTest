// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "EnterTrigger.h"


//CollisionComponent* col;

// Sets default values for this component's properties
UEnterTrigger::UEnterTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnterTrigger::BeginPlay()
{
	Super::BeginPlay();

	// ...
	//col->OnComponentBeginOverlap.AddDynamic(this, &UEnterTrigger::OnOverlapBegin);
}


// Called every frame
void UEnterTrigger::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
	//AActor::OnActorBeginOverlap();

	//OnActorBeg
	// ...
}

void UEnterTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		//nemesis->Destroy();
	}

}