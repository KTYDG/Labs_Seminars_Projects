#pragma once
#include "pch.h"

class People {
public:
	wstring *LastName, *work;
	int *birth, *group;
	
	People(wstring s);

	void Cout();

	~People();
};

