#pragma once
#include <iostream>  
using namespace std;

template <typename T>
struct t_data
{
	std::string name;
	T val;
	bool bDirty = false;

	void setvalue(const T newval)
	{
		val = newval;
		bDirty = true;
	}

	T getvalue()
	{
		return val;
	}

	__declspec(property(get = getvalue, put = setvalue)) T value;

	friend ostream& operator<<(ostream& os, const t_data<T>& data)
	{
		os << data.val;
		return os;
	}
};

class CPlayerData
{
public:
	t_data<int> properties[3] = {
		{"health", 100, false},
		{"armor", 100, false},
		{"level", 0, false}
	};

	void Serialize();

	CPlayerData();
	~CPlayerData();
};

