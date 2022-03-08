#pragma once
#include "Parser.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

class PR38 DB {
public:
	map<wstring, Type*>m;
	map<wstring, Type*>buffer; // буффур в котором создается новая сортировка, иначе не выйдет
	char state = 1; // сохраняет текущую выведенную таблицу
	bool state2 = 0; // определяет вывели ли уже эту таблицу(для обратной сортировки)
	DB();
	~DB();

	void frame(); // рисует рамку
	void print(bool reverse = 0); // выводит данные
	void sort(char a); // сортирует по нажатию кнопки
};

