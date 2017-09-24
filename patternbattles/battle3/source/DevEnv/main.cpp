#include "tier0.h"
#include "spell.h"
using namespace std;

class TestSpell : public Spell
{
protected:
	virtual void Activate()
	{
		Console::Msg(Console::White, Console::Black, "Test spell activated\n");

		Console::Msg(Console::White, Console::Black, "Calling PlaySound\n");
		PlaySound("spells/test.wav", 1.0f);

		Console::Msg(Console::White, Console::Black, "Calling SpawnParticle\n");
		SpawnParticle("spells/test.ptcl");
	}
};

int main()
{
	Spell *testSpell = new TestSpell();

	testSpell->Spawn();

	delete testSpell;

	system("pause");

	return 0;
}