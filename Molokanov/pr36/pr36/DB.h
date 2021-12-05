#pragma once
#include "pch.h"
#include "Small.h"
#include "Big.h"
//#include "Mapper.h"


class PR36 DB {
public:
	list<Shape*>l;
	static map<string, int>token; //Mapper*>token;

	DB();
	DB(const DB& cl);

	void Parser();
	//void Tokens();
	void Out();
	DB& operator=(const DB& cl);

	~DB();
};

