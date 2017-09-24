#pragma once

#include "MotionController.h"

class CPlayerMotionController : public CMotionController
{
public:
	virtual void MoveTo(float x, float y, float z);
	CPlayerMotionController();
	~CPlayerMotionController();
};

