#pragma once
#include <iostream>
#include <set>
using namespace std;

class Base {
public:
	int* x;
	Base();
	Base(const Base& cl);
	Base(int xxx);
	virtual ~Base();

	virtual Base* clone();
	virtual int get();
	virtual int compare();
};

