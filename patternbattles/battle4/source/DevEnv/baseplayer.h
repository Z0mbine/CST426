#pragma once

class CInputComponent;
class CMotionController;
class CStaticMeshComponent;

class CBasePlayer
{
protected:
	void Initialize();

public:
	CInputComponent* InputController;
	CMotionController* MotionController;
	CStaticMeshComponent* StaticMeshComponent;

	CBasePlayer();
	~CBasePlayer();
};

