#pragma once
#include "Derived.h"

struct predicate {
	bool operator()(Base* x1, Base* x2) const {
		return x1->compare() < x2->compare();
	}
};

class DB {
private:
	static bool turn;
	int count = 0;
	set<Base*, predicate>s;
public:
	DB() = default;
	DB& operator=(const DB& cl);
	~DB();

	void del();
	void add(Base* b);
	void print();
};

