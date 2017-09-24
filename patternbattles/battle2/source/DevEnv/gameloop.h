#pragma once

#include "tier0.h"
#include <chrono>
#include <conio.h>
using namespace std;

// Non-blocking getch
int getch_noblock() {
	if (_kbhit())
		return _getch();
	else
		return -1;
}

class GameLoop
{
private:
	bool m_bFlaggedForDeath = false;

public:
	void Input()
	{
		char key = getch_noblock();

		if (key >= 1)
		{
			if (key == 27)
				m_bFlaggedForDeath = true;

			Console::Msg(Console::Red, Console::Black, "Key pushed: ");
			Console::Msg(Console::White, Console::Black, "%c - %d\n", key, (int)key);
		}
	}

	void Update()
	{
		static auto m_Start = chrono::high_resolution_clock::now();
		static auto m_Init = chrono::high_resolution_clock::now();
		auto now = chrono::high_resolution_clock::now();

		auto elapsed = now - m_Start;

		int seconds = chrono::duration_cast<chrono::seconds>(elapsed).count();

		// Every second, write time since program start, just to verify that we're looping
		if (seconds >= 1)
		{
			int upTime = chrono::duration_cast<chrono::seconds>(now - m_Init).count();

			Console::Msg(Console::Green, Console::Black, "%d\n", upTime);

			m_Start = chrono::high_resolution_clock::now();
		}

		Input();
	}

	// Enter the game loop
	void Init()
	{
		while (!m_bFlaggedForDeath)
			Update();
	}

	GameLoop() {}
	~GameLoop() {}
};