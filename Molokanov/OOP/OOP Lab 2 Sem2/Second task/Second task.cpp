#include "pch.h"
#include "MyVector.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
	MyVector v;
	v.push_back(23);
	v.push_back(24);
	v.push_back(15);/*
	v.insert(10, 1);
	v.insert(11, 1);
	v.insert(12, 1);
	v.insert(13, 5);
	v.insert(14, 6);
	v.insert(15, 8);*/
	v.push_back(65);
	v.output();

	v.erase(2, 4);
	v.output();

	v.push_back(65);
	v.push_back(66);
	v.output();

	v.erase(1, 2);
	v.output();

	return 0;
}
