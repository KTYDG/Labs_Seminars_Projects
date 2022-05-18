#include "pch.h"
#include "emloyee.h"

int Employee::employee = 0;
Employee::Employee(wstring empl) {
	id_employee = new int(employee++);
	FirstName = new wstring(L"");
	MiddleName = new wstring(L"");
	LastName = new wstring(L"");
	Department = new wstring(L"");
	Position = new wstring(L"");
	Salary = new double(NULL);
	empl += L" ";
	wstring word = L"";
	int part = 0;
	for(wstring::iterator i = empl.begin(); i != empl.end(); ++i) {
		switch(part) {
			case 0:
				if(*i != L' ') word += *i;
				else {
					try { *id_employee = stoi(word); }
					catch(...) { *id_employee = employee - 1; }
					word = L"";
					part++;
				}
				break;
			case 1:
				if(*i != L' ' or iswalpha(*i)) *LastName += *i;
				else part++;
				break;
			case 2:
				if(*i != L' ' or iswalpha(*i)) *FirstName += *i;
				else part++;
				break;
			case 3:
				if(*i != L' ' or iswalpha(*i)) *MiddleName += *i;
				else part++;
				break;
			case 4:
				if(*i != L' ' or iswalpha(*i)) *Department += *i;
				else if(*i == L'-') *Department += ' ';
				else part++;
				break;
			case 5:
				if(*i != L' ' or iswalpha(*i)) *Position += *i;
				else part++;
				break;
			case 6:
				if(*i != L' ') word += *i;
				break;
		}
	}
	try { *Salary = stod(word); }
	catch(...) { *Salary = 0; }
}
void Employee::Edit(wstring s, int col) {
	switch(col) {
		case 0:
			*id_employee = stoi(s);
			break;
		case 1:
			*LastName = s;
			break;
		case 2:
			*FirstName = s;
			break;
		case 3:
			*MiddleName = s;
			break;
		case 4:
			*Department = s;
			break;
		case 5:
			*Position = s;
			break;
		case 6:
			*Salary = stod(s);
			break;
	}
}


Employee::~Employee() {
	delete id_employee;
	delete FirstName;
	delete MiddleName;
	delete LastName;
	delete Department;
	delete Position;
	delete Salary;
}