#include "baseplayer.h"
#include "PlayerInput.h"
#include "PlayerMotionController.h"
#include "StaticMeshComponent.h"

void CBasePlayer::Initialize()
{
	InputController = new CPlayerInput();
	MotionController = new CPlayerMotionController();
	StaticMeshComponent = new CStaticMeshComponent();
}

CBasePlayer::CBasePlayer()
{
	Initialize();
}


CBasePlayer::~CBasePlayer()
{
}
