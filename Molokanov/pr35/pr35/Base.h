#pragma once
#ifdef PR35_EXPORTS
#define PR35 __declspec(dllexport)
#else
#define PR35 __declspec(dllimport)
#endif
#include "pch.h"

class PR35 Base {
private:
	string* a;
public:
	Base();
	Base(const Base& clone);

	virtual void StringOut(HDC hdc, int& x, int& y);
	virtual void Copy(vector<Base*>&v);

	virtual ~Base();
};

