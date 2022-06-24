#include "pch.h"
#include "Coursework.h"

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

HR_department::HR_department(wstring st) {
	setlocale(LC_ALL, "");
	const locale utf8_locale = locale(locale(), new std::codecvt_utf8<wchar_t>());

	wstring s = L""; // создаем принимающую поток переменную
	std::wifstream input; // создаем поток
	input.open("Employee.txt");
	if(!input) {
		std::wcout << L"Не удалось открыть файл";
		return;
	}
	input.imbue(utf8_locale);
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) {
			Employee *eml = new Employee(s);
			employees.emplace(*(eml->id_employee), eml);
		}
	}
}

void HR_department::Add(wstring s, int id, int col, bool &test) {
	wstring Buffer = L"";
	if(col < 6 && col >= 1) { // Парсим текст
		for(auto &ch : s) {
			if(iswalpha(ch)) {
				Buffer += ch;
			}
		}
	}
	else {	// Парсим цифры
		for(auto &ch : s) {
			if(iswdigit(ch)) Buffer += ch;
		}
	}
	if(Buffer.empty()) { test = true; return; }
	if(employees.find(id) == employees.end()) employees[id] = new Employee(Buffer);
	employees[id]->Edit(Buffer, col);
	test = false;
}
void HR_department::set_diff(wstring s) {
	if(!s.empty()) {
		Employee *eml = new Employee(s);
		employees.emplace(*(eml->id_employee), eml);
	}
}
void HR_department::Save() {
	const locale utf8_locale = locale(locale(), new std::codecvt_utf8<wchar_t>());
	std::wofstream output;
	output.open("Employee.txt", std::ios::out | std::ios::trunc);
	if(!output) {
		std::wcout << L"Не удалось открыть или создать файл";
		return;
	}
	output.imbue(utf8_locale);
	for(const auto &elem : employees) {
		output << *elem.second->id_employee << L" " << *elem.second->LastName << L" " << *elem.second->FirstName
			<< L" " << *elem.second->MiddleName << L" ";
		for(auto &ch : *elem.second->Department) {
			if(ch == L' ') output << "-";
			else output << ch;
		}
		output << L" ";
		for(auto &ch : *elem.second->Position) {
			if(ch == L' ') output << "-";
			else output << ch;
		}
		output << L" " << *elem.second->Salary << L"\n";
	}
}

// Функция set_difference из библы algorithm, работающая через оператор
HR_department &HR_department::operator=(const HR_department &cl) {
	if(this == &cl) return *this;
	map<int, Employee *>temporary;

	map<int, Employee *>::const_iterator f1 = cl.employees.begin();
	map<int, Employee *>::const_iterator l1 = cl.employees.end();
	map<int, Employee *>::iterator f2 = employees.begin();
	map<int, Employee *>::iterator l2 = employees.end();

	std::set_difference(f1, l1, f2, l2, std::inserter(temporary, temporary.end()), employees.value_comp());

	for(map<int, Employee *>::iterator i = temporary.begin(); i != temporary.end(); ++i) {
		employees.emplace(i->first, i->second);
	}

	return *this;
}

HR_department::~HR_department() {
	for(const auto &elem : employees) {
		delete elem.second;
	}
}