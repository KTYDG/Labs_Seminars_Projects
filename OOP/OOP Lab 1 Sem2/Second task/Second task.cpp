#include "pch.h"
#include "DB.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
	DB db1;
	db1.Add(new Parent("PPP"));
	db1.Add(new Child());
	db1.Add(new Child("TTT"));
	db1.Add(new Parent());

	DB db2(db1);

	cout << "\ndb1:\n";
	db1.Print();
	db1.~DB();

	cout << "\ndb2:\n";
	db2.Print();
}