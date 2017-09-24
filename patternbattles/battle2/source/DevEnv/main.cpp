// Include necessary libraries
#include "tier0.h"
#include "gameloop.h"
using namespace std;

int main()
{
	GameLoop game;

	Console::Msg(
		Console::White,
		Console::Black,
		"Game loop entered, responds to key input.\n"
		"Prints program uptime in seconds continually\n"
		"Press ESC to kill program\n"
	);

	game.Init();
}