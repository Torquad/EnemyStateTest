// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CGameObjectState.h"
/**
 * 
 */
class ENEMYSTATETEST_API CNemesisScizzorsState : public CGameObjectState
{
public:
	void OnUpdate();
	void OnEnter();
	void OnLeave();
	CNemesisScizzorsState();
	~CNemesisScizzorsState();
};
