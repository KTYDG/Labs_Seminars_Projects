#pragma once
#include "Type.h"

class Library {
public:
	vector<Type*>storage;
	Library(int number);
	~Library();

	Library& operator=(const Library& cl);
	void ShowBase();
};

