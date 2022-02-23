#include "pch.h"
#include "Type.h"

Type::Type(const Type& cl) {
	type = new wstring(*cl.type);
	name = new wstring(*cl.name);
	year = new int(*cl.year);
	page = new int(*cl.page);
}
Type::Type(wstring s) {
	short part = 0;
	type = new wstring(L"");
	name = new wstring(L"");
	year = new int(0);
	page = new int(0);
	wstring yy;
	wstring p;
	for(wstring::iterator i = s.begin(); i != s.end(); ++i) {
		switch(part) {
			case 0:
				if(*i != L' ') {
					*type += *i;
				}
				else part = 1;
				break;
			case 1:
				if(isdigit(*i)) {
					yy += *i;
				}
				else {
					*year = stoi(yy);
					part = 2;
				}
				break;
			case 2:
				if(*i == L'_') {
					*name += L' ';
				}
				else if(*i != L' ') {
					*name += *i;
				}
				else {
					part = 3;
				}
				break;
			case 3:
				if(isdigit(*i)) {
					p += *i;
				}
				break;
		}
	}
	*page = stoi(p);
}
Type::~Type() {
	delete type;
	delete name;
	delete year;
	delete page;
}

wstring Type::GetName() {
	return *name;
}
Type* Type::Copy() {
	return new Type(*this);
}
void Type::Cout() {
	wcout << L" | " << left << setw(6) << *type << L" | " << setw(4) << *year
		<< L" | " << setw(24) << *name << L" | " << setw(8) << *page << L" | " <<  endl;

}