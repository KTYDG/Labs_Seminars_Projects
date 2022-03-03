#include "pch.h"
#include "Parent.h"


Parent::Parent() {
	str = new string("OOP");
}
Parent::Parent(string x) {
	str = new string(x);
}
Parent::Parent(const Parent& cl) {
	str = new string(*cl.str);
}
Parent::~Parent() {
	delete str;
}

void Parent::Copy(vector<Parent*>&v) {
	v.push_back(new Parent(*this));
}
string Parent::Get() {
	return *str;
}
