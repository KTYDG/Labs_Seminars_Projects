#include "pch.h"
#include "Derived.h"

Derived::Derived() {
	l.push_back(new string("Derived_1"));
	l.push_back(new string("Derived_2"));
	l.push_back(new string("Derived_3"));
}

string Derived::Get(int i) {
	list<string*>::iterator I = l.begin();
	for(j = 0; i < i; i++) {
		++I;
	}
	return **I;
}

Derived::~Derived() {
	for(list<string*>::iterator i = l.begin(); i != l.end(); ++i) {
		delete *i;
	}
	l.clear();
}
