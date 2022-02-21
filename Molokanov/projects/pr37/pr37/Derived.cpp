#include "Derived.h"
char Derived::D = 'D';

// Base(rand()%100) позвол€ет создать случайны X не задава€ его в ручную
Derived::Derived():Base(rand()%100) {
	y = new int(25);
}

// Base(cl) позвол€ет скопировать нормально X и добавить его в новую db
Derived::Derived(const Derived& cl):Base(cl) {
	y = new int(*cl.y);
}

Derived::~Derived() {
	delete y;
}

Derived* Derived::clone() {
	return new Derived(*this);
}

// ƒл€ вывода переменной производного класса возрвращаем Y
int Derived::get() {
	return *y;
}

// ƒл€ сравнени€ по ’ мы возвращаем ’ производного класса, который наследуетс€
// ќт конструктора по умолчанию базовго класса
int Derived::compare() {
	return *x;
}

char Derived::who() {
	return D;
}