// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CGameObjectState.h"
#include "Enemy.h"
/**
 * 
 */
//class ANemesis;

class ENEMYSTATETEST_API CNemesisPaperState : public CGameObjectState
{
public:
	

	void OnUpdate();
	void OnEnter();
	void OnLeave();
	void OnMessage(char* message);
	void OnMessage(CGameObjectState* message);

	CNemesisPaperState(AEnemy* owningNemesis);
	~CNemesisPaperState();

private:
	AEnemy* owner;
};
