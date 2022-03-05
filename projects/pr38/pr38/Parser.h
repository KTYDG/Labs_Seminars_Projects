#pragma once

#include "Type.h"

//struct PR38 Expression {
//	Expression(std::string token): token(token) {}
//	Expression(std::string token, Expression a): token(token), args{a} {}
//
//	string token;
//	vector<Expression> args;
//};


class PR38 Parser {
public:
	explicit Parser(const wchar_t* input): input(input) {}
	Type* parse();
private:

	void parse_author(Type* t);
	void parse_year(Type* t);
	void parse_title(Type* t);
	void parse_publisher(Type* t);
	void parse_doi(Type* t);
	const wchar_t* input;
	bool year = false;
};


