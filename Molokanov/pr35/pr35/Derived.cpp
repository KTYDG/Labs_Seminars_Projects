#include "pch.h"
#include "Derived.h"

Derived::Derived() {
	l.push_back(new string("Derived_1"));
	l.push_back(new string("Derived_2"));
	l.push_back(new string("Derived_3"));
}

void Derived::StringOut(HDC hdc, int &x, int &y) {
	for(list<string*>::iterator i = l.begin(); i != l.end(); ++i) {
		TextOutA(hdc, x, y, (*i)->c_str(), (*i)->size());
		y += 15;
	}

	//for(int j = 0; j < i; i++) {
	//	I++;
	//}
}

Derived::~Derived() {
	for(list<string*>::iterator i = l.begin(); i != l.end(); ++i) {
		delete *i;
	}
	l.clear();
}
