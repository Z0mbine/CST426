#include "tier0.h"
#include "baseplayer.h"
#include "PlayerInput.h"
#include "PlayerMotionController.h"
#include "StaticMeshComponent.h"
using namespace std;

int main()
{
	Console::Msg(Console::White, Console::Black, "Instantiating BasePlayer object...\n");
	CBasePlayer player;

	Console::Msg(Console::White, Console::Black, "Raw setting Static Mesh Component data...\n");
	strcpy_s(player.StaticMeshComponent->data, "[SKELETON MESH]");

	Console::Msg(Console::White, Console::Black, "\nSimulating key input for Player Input Component...\n");
	player.InputController->AcceptInput('a');

	Console::Msg(Console::White, Console::Black, "\nRequesting Motion Controller Component to move actor...\n");
	player.MotionController->MoveTo(0.f, 0.f, 0.f);

	Console::Msg(Console::White, Console::Black, "\nReading Static Mesh Component data...\n");
	Console::Msg(Console::White, Console::Black, "Player mesh data: %s\n", player.StaticMeshComponent->data);

	system("pause");

	return 0;
}