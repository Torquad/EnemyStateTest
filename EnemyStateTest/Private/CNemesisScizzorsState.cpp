// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyStateTest.h"
#include "CNemesisStates.h"


CNemesisScizzorsState::CNemesisScizzorsState(AEnemy* owningNemesis) : owner(owningNemesis)
{
	ScizzorsText = NSLOCTEXT("SomeNamespace", "ScizzorsKey", "Scizzors");
}

void CNemesisScizzorsState::OnUpdate()
{

}

void CNemesisScizzorsState::OnEnter()
{
	owner->text->SetText(ScizzorsText);
	//OutputDebugStringW(L"Enter Paper State.\n");
}

void CNemesisScizzorsState::OnLeave()
{
	//OutputDebugStringW(L"Leave Paper State.\n");
}

void CNemesisScizzorsState::OnMessage(std::string message)
{
	if (message == "Paper")
	{
		owner->SetState(new CNemesisPaperState(owner));
	}
	else if (message == "Rock")
	{
		owner->SetState(new CNemesisRockState(owner));
	}
}