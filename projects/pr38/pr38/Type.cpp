#include "pch.h"
#include "Type.h"

Type::~Type() {
	delete authors;
	delete title;
	delete publisher;
	delete year;
	delete type;
}

void Type::author_add(wstring a) {
	authors = new wstring(a);
}
void Type::title_add(wstring a) {
	title = new wstring(a);
}
void Type::publisher_add(wstring a) {
	publisher = new wstring(a);
}
void Type::year_add(int a) {
	year = new int(a);
}
void Type::type_add(int a) {
	type = new int(a);
}
void Type::doi_add(wstring a) {
	doi = new wstring(a);
}