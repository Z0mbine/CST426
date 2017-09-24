#include "tier0.h"
#include "DataManager.h"
using namespace std;

int main()
{
	CPlayerData dataTable;

	Console::Msg(Console::White, Console::Black, "Editing health and armor values of test player...\n");
	dataTable.properties[1].value = 10;
	dataTable.properties[0].value = 3;

	Console::Msg(Console::White, Console::Black, "Requesting serialization of player data...\n");
	dataTable.Serialize();
	
	Console::Msg(Console::White, Console::Black, "Requesting secondary serialization of player data with no changes (no output should appear)...\n");
	dataTable.Serialize();

	system("pause");

	return 0;
}