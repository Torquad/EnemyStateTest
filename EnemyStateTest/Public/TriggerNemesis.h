// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Engine/TriggerBox.h"
#include "Nemesis.h"
#include "TriggerNemesis.generated.h"

UENUM(BlueprintType)
enum class GameChoices : uint8
{
	Rock UMETA(DisplayName = "Rock"),
	Paper UMETA(DisplayName = "Paper"),
	Scizzors UMETA(DisplayName = "Scizzors")
};

UCLASS()
class ENEMYSTATETEST_API ATriggerNemesis : public ATriggerBox
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, Category = Enum)
		GameChoices choice;

	UPROPERTY(EditAnywhere)
		ANemesis* nemesis;
	// Sets default values for this actor's properties
	ATriggerNemesis();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION()
	void OnTrigger(AActor* OverlappedActor, AActor* OtherActor);

	/*UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);*/
};
