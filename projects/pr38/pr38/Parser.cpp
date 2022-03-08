#include "pch.h"
#include "Parser.h"


Type* Parser::parse() {
	Type* t = new Type();
	while(*input != '\0') {
		t->number_add((int)((*input) - '0'));
		parse_author(t);
		parse_year(t);
		parse_title(t);
		parse_publisher(t);
		parse_doi(t);
	}
	return t;
}

void Parser::parse_author(Type* t) {
	wstring auth = L"";
	// Первоначальный пропуск до слова
	while(!iswalpha(*input)) { input++; }
	// Вводим фамилии, пока не начнется скобка(начало ввода даты)
	while(*input != L'(') {
		// Доп условие, если после фамилии идет еще один автор
		if(*input == L'.' and (*(input + 1) == L',' or *(input + 1) == L';')) {
			auth += *input++;
			auth += L',';
		}
		else if(iswalpha(*input) or iswspace(*input) or *input == L'.') auth += *input++;
		else input++;
	}
	t->author_add(auth);
}
void Parser::parse_year(Type* t) {
	wstring year = L"";
	// Ищем дату из скобок, пока не наберем
	while(*input != L')') {
		if(iswdigit(*input) && year.size() != 4) {
			year += *input++;
		}
		else input++;
	}
	/*input++;*/
	t->year_add(stoi(year));
}
void Parser::parse_title(Type* t) {
	wstring title = L"";
	// Первоначальный пропуск до слова
	while(!isalpha(*input)) { input++; }

	while(*input != L'.' && *input != L',' && *input != L'"') {
		if(iswalpha(*input) or iswspace(*input)) title += *input;
		input++;
	}
	t->title_add(title);
}

void Parser::parse_publisher(Type* t) {
	wstring publisher = L"";
	// Первоначальный пропуск до слова
	while(!isalpha(*input)) { input++; }

	while(*input != L'.' && *input != L',') {
		if(iswalpha(*input) or iswspace(*input)) publisher += *input;
		input++;
	}
	t->publisher_add(publisher);
}
void Parser::parse_doi(Type* t) {
	wstring doi = L"";
	// Чистим строку, пока не дойдем до doi
	while(doi != L"doi" && *input != L'\0') {
		if(iswalpha(*input)) doi += *input;
		input++;
	}
	// Проверка пустой ли doi, если да, то выходим
	doi = L"";
	if(*input == L'\0') {
		t->doi_add(doi);
		t->type_add(1);
		return;
	}
	else input++;

	while(*input != L'\0') {
		doi += *input++;
	}
	t->doi_add(doi);
	t->type_add(2);
}