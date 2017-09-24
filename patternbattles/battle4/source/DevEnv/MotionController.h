#pragma once
class CMotionController
{
public:
	virtual void MoveTo(float x, float y, float z) = 0;
	CMotionController();
	~CMotionController();
};

