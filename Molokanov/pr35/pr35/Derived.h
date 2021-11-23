#pragma once
#ifdef DERIVED_EXPORTS
#define DERIVED_API __declspec(dllexport) 
#else
#define DERIVED_API __declspec(dllimport) 
#endif
#include "Base.h"

class Derived: public Base {
public:
	list<string*>l;

	Derived();

	string Get(int i);

	~Derived();
};

