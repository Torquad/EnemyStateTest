// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "Nemesis.h"


// Sets default values
ANemesis::ANemesis()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Controller->nnav
	//GetController()->move
}

// Called when the game starts or when spawned
void ANemesis::BeginPlay()
{
	Super::BeginPlay();
	SetState(new CNemesisRockState(this));
}

// Called every frame
void ANemesis::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	myState->OnUpdate();
}

// Called to bind functionality to input
void ANemesis::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

//void ANemesis::Stimulus(std::string stim)
//{
//	myState->OnMessage(stim);
//}

void ANemesis::Rock()
{
	myState->OnMessage("Rock");
	//hello->SimpleMoveToLocation(RockLocation);
	//GetController()->
}

void ANemesis::Paper()
{
	myState->OnMessage("Paper");
}

void ANemesis::Scizzors()
{
	myState->OnMessage("Scizzors");
}
