#pragma once
#pragma warning( disable: 4251 ) // Опять отключаем предупреждение
#ifdef PR36_EXPORTS
#define PR36 __declspec(dllexport)
#else
#define PR36 __declspec(dllimport)
#endif
#include "pch.h"

class PR36 Shape {
public:
	list<pair<int*,int*>> figure;
	virtual ~Shape() = default;
};

