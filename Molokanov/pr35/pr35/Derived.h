#pragma once
#include "Base.h"
class Derived: public Base {
public:
	list<string*>l;

	Derived();

	string Get(int i);

	~Derived();
};

