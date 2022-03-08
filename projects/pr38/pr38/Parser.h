#pragma once

#include "Type.h"

class PR38 Parser {
public:
	const wchar_t* input; // хранит полученную строку
	explicit Parser(const wchar_t* input): input(input) {} // получение строки
	Type* parse(); // функция, которая парсит input и заносит все в Type
private:
	// парсер соответсвует названию
	void parse_author(Type* t);
	void parse_year(Type* t);
	void parse_title(Type* t);
	void parse_publisher(Type* t);
	void parse_doi(Type* t);

};


