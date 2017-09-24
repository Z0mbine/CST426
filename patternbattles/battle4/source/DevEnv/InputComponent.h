#pragma once
class CInputComponent
{
public:
	virtual void AcceptInput(char button) = 0;

	CInputComponent();
	~CInputComponent();
};

