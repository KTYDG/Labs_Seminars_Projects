#pragma once
#pragma warning( disable: 4251 ) // Опять отключаем предупреждение
#ifdef PR36_EXPORTS
#define PR36 __declspec(dllexport)
#else
#define PR36 __declspec(dllimport)
#endif

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

