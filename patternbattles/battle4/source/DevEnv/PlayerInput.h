#pragma once
#include "InputComponent.h"

class CPlayerInput : public CInputComponent
{
public:
	virtual void AcceptInput(char button);
	CPlayerInput();
	~CPlayerInput();
};

