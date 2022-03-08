#include "pch.h"
#include "Type.h"

Type::~Type() {
	delete number;
	delete authors;
	delete title;
	delete publisher;
	delete year;
	delete type;
	delete doi;
}

void Type::number_add(int a) {
	number = new int(a);
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
void Type::doi_add(wstring a) {
	doi = new wstring(a);
}
void Type::type_add(int a) {
	// Тип 1 - книга, тип 2 - статья
	// Книга без doi, статья с doi
	type = new int(a);
}

int Type::num_return() {
	return *number;
}
wstring Type::aut_return(bool a) {
	if(a == 0) {
		wstring FirstAuthor = L"";
		wstring::iterator i = authors->begin();
		while(!iswspace(*i)) {
			FirstAuthor += *i;
			i++;
		}
		return FirstAuthor;
	}
	else return *authors;
}
wstring Type::tit_return() {
	return *title;
}
wstring Type::pub_return() {
	return *publisher;
}
int Type::yea_return() {
	return *year;
}
int Type::typ_return() {
	return *type;
}
wstring Type::doi_return() {
	return *doi;
}
