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
	Salary = new long double(NULL);
	empl += L" ";
	wstring word = L"";
	int part = 0;
	for(auto &ch : empl) {
		switch(part) {
			case 0:
				if(ch != L' ') word += ch;
				else {
					try { *id_employee = stoi(word); }
					catch(...) { *id_employee = employee - 1; }
					word = L"";
					part++;
				}
				break;
			case 1:
				if(ch != L' ' or iswalpha(ch)) *LastName += ch;
				else part++;
				break;
			case 2:
				if(ch != L' ' or iswalpha(ch)) *FirstName += ch;
				else part++;
				break;
			case 3:
				if(ch != L' ' or iswalpha(ch)) *MiddleName += ch;
				else part++;
				break;
			case 4:
				if(ch == L'-') *Department += ' ';
				else if(ch != L' ' or iswalpha(ch)) *Department += ch;
				else part++;
				break;
			case 5:
				if(ch == L'-') *Position += ' ';
				else if(ch != L' ' or iswalpha(ch)) *Position += ch;
				else part++;
				break;
			case 6:
				if(ch != L' ' && ch != 160) word += ch;
				break;
		}
	}
	try { *Salary = stold(word); }
	catch(...) { *Salary = 0; }
}
void Employee::Edit(wstring s, int col) {
	switch(col) {
		case 0:
			*id_employee = abs(stoi(s));
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
			*Salary = stold(s);
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