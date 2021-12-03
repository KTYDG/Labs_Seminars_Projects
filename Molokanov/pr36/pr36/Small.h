#pragma once
#include "Shape.h"

class PR36 Small: public Shape {
public:
	Small();
	Small(int X, int Y);
	Small(const Small& cl);

	void Clone(list<Shape*>&l);
	void Add(int X, int Y);
	void Print();

	~Small();
};

