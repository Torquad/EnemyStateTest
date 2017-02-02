// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "TriggerNemesis.h"


// Sets default values
ATriggerNemesis::ATriggerNemesis()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATriggerNemesis::BeginPlay()
{
	Super::BeginPlay();
	this->OnActorBeginOverlap.AddDynamic(this,&ATriggerNemesis::OnTrigger);
	//GetCollisionComponent()->OnComponentBeginOverlap.AddDynamic(this, &ATriggerNemesis::OnOverlapBegin);
}

// Called every frame
void ATriggerNemesis::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ATriggerNemesis::OnTrigger(AActor* OverlappedActor, AActor* OtherActor)
{
	if (nemesis != NULL)
	{
		//nemesis->Stimulus(choice.ToString());
		switch (choice)
		{
			case GameChoices::Rock:
				nemesis->Rock();
				break;
			case GameChoices::Paper:
				nemesis->Paper();
				break;
			case GameChoices::Scizzors:
				nemesis->Scizzors();
				break;
		}
	}
}

//void ATriggerNemesis::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor->ActorHasTag("Player"))
//	{
//		OtherActor->Destroy();
//	}
//
//}