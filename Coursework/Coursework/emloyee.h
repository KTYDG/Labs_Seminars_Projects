#pragma once
#include "Coursework.h"

class Employee: public HR_department {
private:
	static int employee;
	int *id_employee;
public:
	Employee() = default;
	Employee(wstring Empl);
};

class FIO: public Employee {
private:
	wstring *FirstName, *MiddleName, *LastName;
protected:
	FIO() = default;
	FIO(wstring FN, wstring MN, wstring LN);
	~FIO();
};
class Birthday: public Employee {
private:
	int *Day, *Month, *Year;
protected:
	Birthday() = default;
	Birthday(int D, int M, int Y);
	~Birthday();
};
class StaffingTable: public Employee {
private:
	wstring *Department, *Position;
	int *Salary;
protected:
	StaffingTable() = default;
	StaffingTable(wstring Dep, wstring Pos, int S);
	~StaffingTable();
};