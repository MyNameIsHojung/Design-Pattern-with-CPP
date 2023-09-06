#pragma once
#include "EHView.h"

class EHApp
{
	EHView* view;

public:
	virtual EHView* MakeView() = 0;

public:
	virtual void Init();
	virtual void Run();
	virtual void Exit();



};

