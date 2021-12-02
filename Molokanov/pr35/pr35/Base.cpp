#include "pch.h"
#include "Base.h"


Base::Base() { 
	d.emplace_back("Работай", "блэт");
	/*a = new string("Base");*/ 
}
Base::Base(const Base& clone) { a = new string(*clone.a); }

void Base::StringOut(HDC hdc, int& x, int& y) {
	for(list<pair<string,string>>::iterator i = d.begin(); i != d.end(); ++i) {
		TextOutA(hdc, x, y, (i->first).c_str(), (i->first).size());
		x += 100;
		TextOutA(hdc, x, y, (i->second).c_str(), (i->second).size());
		x -= 100;
		y += 15;
	}
	//TextOutA(hdc, x, y, a->c_str(), a->size());
	//y += 15;
}
void Base::Copy(vector<Base*>&v) { v.push_back(new Base(*this)); }

Base::~Base() { delete a; }