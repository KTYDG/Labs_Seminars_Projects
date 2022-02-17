#include "Derived.h"
char Derived::D = 'D';

// Base(rand()%100) ��������� ������� �������� X �� ������� ��� � ������
Derived::Derived():Base(rand()%100) {
	y = new int(25);
}

// Base(cl) ��������� ����������� ��������� X � �������� ��� � ����� db
Derived::Derived(const Derived& cl):Base(cl) {
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

char Derived::who() {
	return D;
}