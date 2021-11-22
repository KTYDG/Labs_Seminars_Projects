#include "DB.h"
#include <locale>

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

int main() {
	locale::global(locale("ru_RU.UTF-8"));
	DB db, db2;	
	db.Add();
	//DB db3(db); db3.Output();
	db2 = db;
	db2.Output();

	return 0;
}
