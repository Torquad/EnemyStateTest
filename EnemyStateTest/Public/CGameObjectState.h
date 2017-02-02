// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <string>
/**
 * 
 */
class ENEMYSTATETEST_API CGameObjectState
{
public:
	virtual void OnEnter() { return; }
	virtual void OnLeave() { return; }
	virtual void OnUpdate() { return; }
	virtual void OnMessage(std::string message) { return; }

	CGameObjectState();
	~CGameObjectState();
};
