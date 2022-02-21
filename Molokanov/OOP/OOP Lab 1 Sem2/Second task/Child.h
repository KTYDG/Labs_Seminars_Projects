#pragma once
#include "Parent.h"

class Child: public Parent {
public:
	Child();
	Child(string x);
	Child(const Child& cl);
	~Child();

	void Copy(vector<Parent*>&v);
	string Get();
};

