
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

// ��� ������ ���������� ������������ ������ ����������� Y
int Derived::get() {
	return *y;
}

// ��� ��������� �� � �� ���������� � ������������ ������, ������� �����������
// �� ������������ �� ��������� ������� ������
int Derived::compare() {
	return *x;
}
