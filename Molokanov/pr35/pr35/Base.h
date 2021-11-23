#pragma once
#ifdef PR35_EXPORTS
#define PR35 __declspec(dllexport)
#else
#define PR35 __declspec(dllimport)
#endif
#include "pch.h"

class PR35 Base {
public:
	string* a;

	Base();

	virtual void StringOut(HDC hdc, int& x, int& y);

	virtual ~Base();
};

