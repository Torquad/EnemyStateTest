// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "CNemesisStates.h"


CNemesisPaperState::CNemesisPaperState(AEnemy* owningNemesis) : owner(owningNemesis)
{
	PaperText = NSLOCTEXT("SomeNamespace", "PaperKey", "Paper");
}

void CNemesisPaperState::OnUpdate()
{
	
}

void CNemesisPaperState::OnEnter()
{
	owner->text->SetText(PaperText);
	//OutputDebugStringW(L"Enter Paper State.\n");
}

void CNemesisPaperState::OnLeave()
{
	//OutputDebugStringW(L"Leave Paper State.\n");
}

void CNemesisPaperState::OnMessage(std::string message)
{
	if (message == "Rock")
	{
		owner->SetState(new CNemesisRockState(owner));
	}
	else if (message == "Scizzors")
	{
		owner->SetState(new CNemesisScizzorsState(owner));
	}
}