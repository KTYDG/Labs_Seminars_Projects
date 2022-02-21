#pragma once

#include "pch.h"
#include <list>
#include <map>
#include <string>
using namespace std;

class PR36 Shape {
public:
	list<pair<int*,int*>> figure;
	virtual void Clone(list<Shape*>&l) = 0;
	virtual void Add(int X, int Y) = 0;
	virtual void Print() = 0;
	virtual ~Shape() = default;
};

