#pragma once
#include "Shape.h"

class PR36 Big: public Shape {
public:
	Big();
	Big(int X, int Y);
	Big(const Big& cl);

	void Clone(list<Shape*>&l);
	void Add(int X, int Y);
	void Print();

	~Big();
};

