#pragma once
#ifdef BASE_EXPORTS
#define BASE_API __declspec(dllexport) 
#else
#define BASE_API __declspec(dllimport) 
#endif

class  Base {
public:
	string* a;

	Base();

	virtual string Get(int i);

	virtual ~Base();
};

