#pragma once
#ifdef DLL1_EXPORTS
#define BASE __declspec(dllexport)
#else
#define BASE __declspec(dllimport)
#endif
#include "pch.h"

class BASE Base {
public:
	string *a;
	Base();
	~Base();
};

