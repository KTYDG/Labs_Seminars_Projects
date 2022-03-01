﻿#include "pch.h"
#include "MyVector.h"
#include <map>;
struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

struct comp {
	bool operator()(string s1, string s2) const {
		s1.erase(s1.begin(), s1.begin() + 2);
		s2.erase(s2.begin(), s2.begin() + 2);
		return s1 < s2;
	}
} compare;

int main() {
	MyVector v;
	v.push_back(23);
	v.push_back(24);
	v.push_back(15);
	v.insert(10, 1);
	v.insert(11, 1);
	v.insert(12, 1);
	v.insert(13, 5);
	v.insert(14, 6);
	v.insert(15, 8);
	v.push_back(65);
	v.output();

	v.erase(2, 4);
	v.output();

	v.erase(1, 2);
	v.output();



	map<string, int, comp>m;
	m.emplace("zzacbd", 1);
	m.emplace("zzabcd", 1);
	m.emplace("zzbdc", 1);
	m.emplace("zzbcd", 1);

	for(map<string, int, comp>::iterator i = m.begin(); i != m.end(); ++i) {
		cout << i->first << "\t" << i->second << endl;
	}


	return 0;
}
