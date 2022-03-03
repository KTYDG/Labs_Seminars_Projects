#include "Derived.h"
char Derived::D = 'D';

// Base(rand()%100) позволяет создать случайны X не задавая его в ручную
Derived::Derived():Base(rand()%100) {
	y = new int(25);
}

// Base(cl) позволяет скопировать нормально X и добавить его в новую db
Derived::Derived(const Derived& cl):Base(cl) {
	y = new int(*cl.y);
}

Derived::~Derived() {
	delete y;
}

Derived* Derived::clone() {
	return new Derived(*this);
}

// Для вывода переменной производного класса возрвращаем Y
int Derived::get() {
	return *y;
}

// Для сравнения по Х мы возвращаем Х производного класса, который наследуется
// От конструктора по умолчанию базовго класса
int Derived::compare() {
	return *x;
}

char Derived::who() {
	return D;
}