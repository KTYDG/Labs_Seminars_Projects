#include "Derived.h"
#include "DB.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

int main() {
	DB db1;
	db1.add(new Base(100));
	db1.add(new Base(75));
	db1.add(new Derived());
	db1.add(new Base(50));
	db1.add(new Derived()); // Не будет добавлено!
	db1.add(new Base(2));
	db1.add(new Base(8));
	db1.add(new Derived()); // Не будет добавлено!
	db1.add(new Base(8));	// Не будет добавлено!
	cout << "db1:\n";
	db1.print(); // В скобках выведено чему равно Х, по функции compare()

	//Копирование
	DB db2;
	DB db3;
	db2 = db1;
	db3 = db1;
	// Удаляем db1
	db1.del();
	// Выводим db2 и db3
	cout << "\ndb2:\n";
	db2.print();
	cout << "\ndb3:\n";
	db3.print();
	db2.del();
	db3.del();
}