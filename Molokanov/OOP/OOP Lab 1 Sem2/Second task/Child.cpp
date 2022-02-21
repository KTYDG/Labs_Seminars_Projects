#include "pch.h"
#include "Child.h"

Child::Child() {
	*str = "OOP_CHILD";
}
Child::Child(string x): Parent(x) {}
Child::Child(const Child& cl) : Parent(cl) {}
Child::~Child() {
}

void Child::Copy(vector<Parent*>&v) {
	v.push_back(new Child(*this));
}
string Child::Get() {
	return *str;
}