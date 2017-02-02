// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CGameObjectState.h"
#include "Enemy.h"

using std::string;
/**
 * 
 */
//class ANemesis;
#ifndef NEMESIS_STATES_H
#define NEMESIS_STATES_H

class ENEMYSTATETEST_API CNemesisPaperState : public CGameObjectState
{
public:
	void OnUpdate();
	void OnEnter();
	void OnLeave();
	void OnMessage(std::string message);

	CNemesisPaperState(AEnemy* owningNemesis);
	~CNemesisPaperState();

private:
	AEnemy* owner;
	FText PaperText;
};

class ENEMYSTATETEST_API CNemesisRockState : public CGameObjectState
{
public:
	void OnUpdate();
	void OnEnter();
	void OnLeave();
	void OnMessage(std::string message);

	CNemesisRockState(AEnemy* owningNemesis);
	~CNemesisRockState();

private:
	AEnemy* owner;
	FText RockText;
};

class ENEMYSTATETEST_API CNemesisScizzorsState : public CGameObjectState
{
public:
	void OnUpdate();
	void OnEnter();
	void OnLeave();
	void OnMessage(std::string message);

	CNemesisScizzorsState(AEnemy* owningNemesis);
	~CNemesisScizzorsState();

private:
	AEnemy* owner;
	FText ScizzorsText;
};

#endif
