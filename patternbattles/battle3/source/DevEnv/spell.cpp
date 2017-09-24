#include "spell.h"
#include <iostream>


void Spell::PlaySound(const char* sound, float volume)
{
	std::cout << "Playing sound: " << sound << std::endl;
}

void Spell::SpawnParticle(const char* ptclName)
{
	std::cout << "Spawning particle: " << ptclName << std::endl;
}

void Spell::Spawn()
{
	Activate();
}

Spell::Spell()
{
}


Spell::~Spell()
{
}
