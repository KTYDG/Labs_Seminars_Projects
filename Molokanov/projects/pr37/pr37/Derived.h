#pragma once
#include "Base.h"

class Derived: public Base {
public:
	static char D;
	int* y;
	Derived();
	Derived(const Derived& cl);
	~Derived();

	Derived* clone();
	int get();
	int compare();
	char who();
};

