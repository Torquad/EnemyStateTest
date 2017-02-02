// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "Enemy.h"


// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	text = CreateDefaultSubobject<UTextRenderComponent>("StateText");
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

//void AEnemy::SetState(const char* command)
////void ANemesis::SetState(CGameObjectState* newState)
//{
//	/*CGameObjectState* newState;
//	switch(command)
//	{
//	case "Rock":
//	newState = new CNemesisRockState();
//	break;
//	case "Paper":
//	newState = new CNemesisPaperState();
//	break;
//	case "Scizzors":
//	newState = new CNemesisScizzorsState();
//	break;
//	default:
//	newState = NULL;
//	throw "BadState";
//	}*/
//
//	/*if(myState != NULL)
//	{
//	myState->OnLeave();
//	delete myState;
//	}
//
//	myState = newState;
//	myState->OnEnter();*/
//}

void AEnemy::SetState(CGameObjectState* newState)
{
	if (myState != NULL)
	{
		myState->OnLeave();
		delete myState;
	}

	myState = newState;
	myState->OnEnter();
}

