#include "pch.h"
#include "People.h"


People::People(wstring s) {
	int part = 0;
	LastName = new wstring(L"");
	work = new wstring(L"");
	wstring b;
	wstring g;
	for(wstring::iterator i = s.begin(); i != s.end(); ++i) {
		switch(part) {
		case 0:
			// ���������� ����� ������ �������� �� ������ C ������� isspace, ��,
			// �� ������� ����� "�" ��������� �������� � ���� �������
			if(*i != L' ') {
				*LastName += *i;
			}
			else {
				part = 1;
				*LastName += L" ";
			}
			break;
		case 1:
			if(*i != L' ') {
				*LastName += *i;
			}
			else part = 2;
			break;
		case 2:
			if(isdigit(*i)) {
				b += *i;
			}
			else {
				birth = new int(stol(b));
				part = 3;
				++i;
			}
			break;
		case 3:
			if(*i != L' ') {
				*work += *i;
			}
			else {
				work->erase(work->end()-1);
				part = 4;
				++i;
			}
			break;
		case 4:
			// isdigit ���� �� �������� ��������� � wstring � ������� ������� "�" �� �����
			if(*i == L' ') {
				++i;
				g += *i;
			}
			break;
		}
	}
	group = new int(stol(g));
}

void People::Cout() {
	wcout << left << setw(16) << *LastName << " | " << setw(4) << *birth
		<< " | " << setw(14)  << *work << L" | ������ " << *group << endl;

}



People::~People() {
	delete LastName;
	delete birth;
	delete work;
	delete group;
}


