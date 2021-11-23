#include "pch.h"
#include "Base.h"


Base::Base() { a = new string("Base"); }

void Base::StringOut(HDC hdc, int& x, int& y) {
	TextOutA(hdc, x, y, a->c_str(), a->size());
	y += 15;
}

Base::~Base() { delete a; }