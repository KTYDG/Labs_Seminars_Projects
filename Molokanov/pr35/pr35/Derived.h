#pragma once
// ����� ��� ��������� ������� STL ����������, ������ � ������, ��� ��� ������� -
// ��� ������������ ������. � ���� ����� ������� ������� ������.
#pragma warning( disable: 4251 )
#include "Base.h"

class PR35 Derived: public Base {
private:
	list<string*>l;
public:
	Derived();
	Derived(const Derived& clone);

	void StringOut(HDC hdc, int& x, int& y);
	void Copy(vector<Base*>&v);

	~Derived();
};

