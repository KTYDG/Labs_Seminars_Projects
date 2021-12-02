#ifdef PR362_EXPORTS
#define PR362 __declspec(dllexport)
#else
#define PR362 __declspec(dllimport)
#endif
#include "pch.h"

class PR362 Shape {
private:
	list<string*>l;
public:
	Shape();
};
