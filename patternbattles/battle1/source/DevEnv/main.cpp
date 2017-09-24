#include "tier0.h"
#include "singleton.h"
#include <chrono>
using namespace std;

int main()
{
	string fileName = "test.txt";
	string content = "Oi, have some data!";

	Console::Msg(Console::White, Console::Black, "Writing '%s' to %s\n", content.c_str(), fileName.c_str());
	Console::Msg(Console::White, Console::Black, "Using singleton instance of FileManager::get()\n");
	FileManager::get().Write(fileName, content);
	Console::Msg(Console::White, Console::Black, "Wrote data to '%s' successfully. Check local directory.\n", fileName.c_str());

	system("pause");

	return 0;
}