#include <iostream>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

class Base {
public:
	string* b;
	Base() { b = new string("Base"); }
	virtual string Out() { return *b; }
	virtual ~Base() { delete b; }
};
class Derived:public Base {
public:
	string* d;
	Derived() { d = new string("Derived"); }
	string Out() { return *d; }
	// Изначально была одна перменная string b, но происходили либо ошибки удаления, либо утечки
	// Поэтому добавлена вторая переменная d
	~Derived() { delete d; } 
};

int Size = 0; // Размер массива
Base **g_array = new Base*[Size]; // Создание массива
// Добавление новых объектов классов
void Append(Base* b) {
	Size += 1;
	auto** g_array1 = new Base*[Size]; // Создание копии массива
	// Копирование массива в копию и выделение памяти на него
	// Была проблема, когда выделялось недостаточно памяти, поэтому перешел от Base к Base**
	memcpy(g_array1, g_array, (Size - 1) * sizeof(Base**));
	delete[] g_array;		// Удаление оригинального массива
	g_array1[Size - 1] = b; // Добавление в конец копии новый объект
	g_array = g_array1;		// Присваиваем копию оригинальному массиву
}

int main() {
	srand(time(0));
	// Рандомное заполнение массива
	for(int i = 0; i < 11; i++) {
		if(rand() % 2 == 0) {
			Append(new Base);
		}
		else {
			Append(new Derived);
		}
	}
	// Вывод массива
	for(int i = 0; i < Size; i++) {
		cout << g_array[i]->Out() << endl;
	}
	// Удаление массива
	for(int i = 0; i < Size; i++) {
		delete g_array[i]; // Вызывает деструкторы классов, очищая выделенную память на переменные
	}
	delete[] g_array; // Добивает последнюю утечку, вызванная самим массивом
	return 0;
}
