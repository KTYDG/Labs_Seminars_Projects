
#include "Derived.h"

Derived::Derived() {
	y = new int(25);
}

Derived::Derived(const Derived& cl)/*:Base(cl)*/ {
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
