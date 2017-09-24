#include "PlayerMotionController.h"
#include "tier0.h"


void CPlayerMotionController::MoveTo(float x, float y, float z)
{
	Console::Msg(Console::White, Console::Black, "Player moving to: %f %f %f\n", x, y, z);
}

CPlayerMotionController::CPlayerMotionController()
{
}


CPlayerMotionController::~CPlayerMotionController()
{
}
