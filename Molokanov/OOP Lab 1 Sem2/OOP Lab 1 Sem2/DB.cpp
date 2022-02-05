#include "pch.h"
#include "DB.h"

DB::DB() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wstring s = L"";

	wifstream input;
	input.open("People.txt"); 
	input.imbue(utf8_locale);
	if(!input) {
		cout << "�� ������� ������� ����" << endl;
		return;
	}
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) v.push_back(new People(s));
	}
}

void DB::ShowBase() {
	wcout << left << setw(16) << L"���" << " | " << setw(4) << L"�.�."
		<< " | " << setw(14) << L"���������" << L" | ������ " << endl;
	cout << setfill('~') << setw(51) << "" << setfill(' ') << endl;

	for(vector<People*>::iterator i = v.begin(); i != v.end(); i++) {
		(*i)->Cout();
	}
}

void DB::ShowEngineers() {
	system("cls");

	wcout << left << setw(16) << L"���" << " | " << setw(4) << L"�.�."
		<< " | " << setw(14) << L"���������" << L" | ������ " << endl;
	cout << setfill('~') << setw(51) << "" << setfill(' ') << endl;

	for(vector<People*>::iterator i = v.begin(); i != v.end(); i++) {
		if(*(*i)->work == L"�������") (*i)->Cout();
		
	}
}

void DB::ShowExcept() {
	system("cls");

	wcout << left << setw(16) << L"���" << " | " << setw(4) << L"�.�."
		<< " | " << setw(14) << L"���������" << L" | ������ " << endl;
	cout << setfill('~') << setw(51) << "" << setfill(' ') << endl;

	Sort();
	for(vector<People*>::iterator i = v.begin(); i != v.end(); i++) {
		if(!(*(*i)->work == L"������������")) (*i)->Cout();

	}
}
void DB::Sort() {
	for(int i = 0; i < v.size(); i++) {
		for(vector<People*>::iterator i = v.begin(); i != v.end() - 1; i++) {
			if(*(*i)->birth > *(*(i + 1))->birth) {
				swap(*i, *(i + 1));
			}
		}
	}
}


DB::~DB() {
	for(int i = 0; i < v.size(); i++) {
		delete v[i];
	}
}