#include "DataManager.h"


void CPlayerData::Serialize()
{
	for (auto &data : properties)
	{
		if (data.bDirty)
		{
			// This would probably be replaced with an actual saving function
			cout << "Saved property " << data.name.c_str() << " with value: " << data << endl;
			data.bDirty = false;
		}
	}
}

CPlayerData::CPlayerData()
{
}


CPlayerData::~CPlayerData()
{
}
