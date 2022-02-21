#pragma once
#include"Child.h"

class DB {
public:
	vector<Parent*>v;

	DB() = default;
	DB(const DB& cl);
	~DB();

	void Add(Parent* p);
	void Print();
};

