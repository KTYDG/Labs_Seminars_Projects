#pragma once
#include "Base.h"

class PR35 Derived: public Base {
public:
	list <string*>l;

	Derived();

	void StringOut(HDC hdc, int& x, int& y);

	~Derived();
};

