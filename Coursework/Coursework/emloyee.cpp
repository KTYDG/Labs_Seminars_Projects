#include "emloyee.h"
int Employee::employee = 0;
Employee::Employee(wstring empl) {
	const locale utf8_locale = locale(locale(), new std::codecvt_utf8<wchar_t>());
	wstring s = L""; // создаем принимающую поток переменную
	std::wifstream input; // создаем поток
	input.open("Employee.txt");
	if(!input) {
		std::cout << "Не удалось открыть файл";
		return;
	}
	input.imbue(utf8_locale);
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) {

		}
	}
}

FIO::FIO(wstring FN, wstring MN, wstring LN) {
	FirstName = new wstring(FN);
	MiddleName = new wstring(MN);
	LastName = new wstring(LN);
}
FIO::~FIO() {
	delete FirstName;
	delete MiddleName;
	delete LastName;
}
Birthday::Birthday(int D = NULL, int M = NULL, int Y = NULL) {
	Day = new int(D);
	Month = new int(M);
	Year = new int(Y);
}
Birthday::~Birthday() {
	delete Day;
	delete Month;
	delete Year;
}
StaffingTable::StaffingTable(wstring Dep, wstring Pos, int S) {
	Department = new wstring(Dep);
	Position = new wstring(Pos);
	Salary = new int(S);
}
StaffingTable::~StaffingTable() {
	delete Department;
	delete Position;
	delete Salary;
}