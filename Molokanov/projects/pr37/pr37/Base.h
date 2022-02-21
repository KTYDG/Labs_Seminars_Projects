#pragma once
#include <iostream>
#include <set>
using namespace std;

class Base {
public:
	static char B;
	int* x;
	Base();
	Base(const Base& cl);
	Base(int xxx);
	virtual ~Base();

	virtual Base* clone();
	virtual int get();
	virtual int compare();
	virtual char who();
};

