#include "PlayerInput.h"
#include "tier0.h"

void CPlayerInput::AcceptInput(char button)
{
	Console::Msg(Console::White, Console::Black, "Player input: %c\n", button);
}

CPlayerInput::CPlayerInput()
{
}

CPlayerInput::~CPlayerInput()
{
}
