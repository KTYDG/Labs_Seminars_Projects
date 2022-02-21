#include "pch.h"
#include "Derived.h"

Derived::Derived() {
	l.push_back(new string("Derived_1"));
	l.push_back(new string("Derived_2"));
	l.push_back(new string("Derived_3"));
}
Derived::Derived(const Derived& clone) {
	for(list<string*>::const_iterator i = clone.l.begin(); i != clone.l.end(); ++i) {
		l.push_back(new string(**i));
	}
}

void Derived::StringOut(HDC hdc, int &x, int &y) {
	for(list<string*>::iterator i = l.begin(); i != l.end(); ++i) {
		TextOutA(hdc, x, y, (*i)->c_str(), (*i)->size());
		y += 15;
	}
}
void Derived::Copy(vector<Base*>& v) { v.push_back(new Derived(*this)); }

Derived::~Derived() {
	for(list<string*>::iterator i = l.begin(); i != l.end(); ++i) {
		delete *i;
	}
	l.clear();
}
