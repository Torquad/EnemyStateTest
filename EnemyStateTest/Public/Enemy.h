// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "CGameObjectState.h"
#include "Enemy.generated.h"

UCLASS()
class ENEMYSTATETEST_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	CGameObjectState* myState;

	UPROPERTY(EditAnywhere)
	UTextRenderComponent* text;

	// Sets default values for this character's properties
	AEnemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	//void SetState(const char* command);
	void SetState(CGameObjectState* newState);
};
