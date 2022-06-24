#pragma once
#include "pch.h"
class COURSEWORK Employee {
private:
	static int employee;
public:
	int *id_employee;
	wstring *FirstName, *MiddleName, *LastName;
	wstring *Department, *Position;
	long double *Salary;
	Employee() = default;
	Employee(wstring Empl);
	void Edit(wstring s, int col);
	~Employee();
};

