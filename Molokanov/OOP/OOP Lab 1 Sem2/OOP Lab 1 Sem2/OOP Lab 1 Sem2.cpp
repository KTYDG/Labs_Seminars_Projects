#include "pch.h"
#include "DB.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
	locale::global(locale("ru_RU.UTF-8"));
	DB db;
	db.ShowBase();
	int c = _getch();
	db.ShowEngineers();
	c = _getch();
	db.ShowExcept();
	return 0;
}