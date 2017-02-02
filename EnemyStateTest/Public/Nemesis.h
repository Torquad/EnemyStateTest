// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "CGameObjectState.h"
#include "Enemy.h"
#include "CNemesisStates.h"
#include "AIController.h"
//#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Nemesis.generated.h"

//class CNemesisPaperState;

UCLASS()
class ENEMYSTATETEST_API ANemesis : public AEnemy
{
	GENERATED_BODY()
	
	
public:
	AActor* text;
	//UNavigationSystem* hello;
	//AIControllerClass

	//AIController* controller;
	//void Stimulus(std::string stim);

	//UFUNCTION(BlueprintCallable, Category = Commands)
	void Rock();

	//UFUNCTION(BlueprintCallable, Category = Commands)
	void Paper();

	//UFUNCTION(BlueprintCallable, Category = Commands)
	void Scizzors();
	
	// Sets default values for this character's properties
	ANemesis();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
};
