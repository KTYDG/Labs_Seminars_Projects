#include "pch.h"
#include "Base.h"


Base::Base() { a = new string("Base"); }
Base::Base(const Base& clone) { a = new string(*clone.a); }

void Base::StringOut(HDC hdc, int& x, int& y) {
	TextOutA(hdc, x, y, a->c_str(), a->size());
	y += 15;
}
void Base::Copy(vector<Base*>&v) { v.push_back(new Base(*this)); }

Base::~Base() { delete a; }