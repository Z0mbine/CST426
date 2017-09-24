#pragma once

class Spell
{
protected:
	float originX, originY, originZ;

	// Called when the spell is activated
	virtual void Activate() = 0;

	void PlaySound(const char* sound, float volume);
	void SpawnParticle(const char* ptclName);

public:
	void Spawn();
	Spell();

	virtual ~Spell();
};

