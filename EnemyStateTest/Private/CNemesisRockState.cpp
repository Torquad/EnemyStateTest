// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "CNemesisStates.h"


CNemesisRockState::CNemesisRockState(AEnemy* owningNemesis) : owner(owningNemesis)
{
	RockText = NSLOCTEXT("SomeNamespace", "RockKey", "Rock");
}

void CNemesisRockState::OnUpdate()
{

}

void CNemesisRockState::OnEnter()
{
	owner->text->SetText(RockText);
	//OutputDebugStringW(L"Enter Paper State.\n");
}

void CNemesisRockState::OnLeave()
{
	//OutputDebugStringW(L"Leave Paper State.\n");
}

void CNemesisRockState::OnMessage(std::string message)
{
	if (message == "Paper")
	{
		owner->SetState(new CNemesisPaperState(owner));
	}
	else if (message == "Scizzors")
	{
		owner->SetState(new CNemesisScizzorsState(owner));
	}
}