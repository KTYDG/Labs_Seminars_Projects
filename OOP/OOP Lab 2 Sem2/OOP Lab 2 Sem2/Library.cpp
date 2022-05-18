#include "pch.h"
#include "Library.h"

// Сравнивает по названию
struct comp {
	bool operator()(Type *x1, Type *x2) {
		return x1->GetName() < x2->GetName();
	}
} compare;


Library::Library(int number = 0) {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wstring s = L"";

	wifstream input;
	if(number == 362) input.open("362.txt");
	else if(number == 112) input.open("112.txt");
	if(!input) {
		cout << "Не удалось открыть файл" << endl;
		return;
	}
	input.imbue(utf8_locale);
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) storage.push_back(new Type(s));
	}
	sort(storage.begin(), storage.end(), compare);
}
Library::~Library() {
	for(vector<Type *>::iterator i = storage.begin(); i != storage.end(); i++) {
		delete *i;
	}
}

// Своя собственная функция set_difference из библы algorithm, работающая через оператор
Library &Library::operator=(const Library &cl) {
	if(this == &cl) return *this;
	vector<Type *>temporary; // временный контейнер с элементами, отсутствующими в библе 362

	// first1 - 112 библа, first2 - 362 библа
	vector<Type *>::const_iterator first1 = cl.storage.begin();
	vector<Type *>::const_iterator last1 = cl.storage.end();
	vector<Type *>::iterator first2 = storage.begin();
	vector<Type *>::iterator last2 = storage.end();

	// Цикл сравнения взят с сайта cplusplus
	while(first1 != last1 && first2 != last2) {
		if(compare(*first1, *first2)) { temporary.push_back((*first1)->Copy()); ++first1; }
		else if(compare(*first2, *first1)) ++first2;
		else { ++first1; ++first2; }
	}

	// Найденные уникальные элементы кладем в нашу 362 библиотеку
	for(vector<Type *>::iterator i = temporary.begin(); i != temporary.end(); ++i) {
		storage.push_back(*i);
	}

	// Сортируем для красоты
	sort(storage.begin(), storage.end(), compare);
	return *this;
}
void Library::ShowBase() {
	cout << setfill('-') << " +" << setw(9) << "+"
		<< setw(7) << "+" << setw(27) << "+" << setw(12) << "+ "
		<< setfill(' ') << endl;
	wcout << L" | " << left << setw(6) << L"Тип" << L" | "
		<< setw(4) << L"Год"
		<< L" | " << setw(24) << L"Название" << L" | " << setw(8) << L"Страницы" << L" | "
		<< endl;
	cout << setfill('-') << " +" << setw(9) << "+"
		<< setw(7) << "+" << setw(27) << "+" << setw(12) << "+ "
		<< setfill(' ') << endl;

	for(vector<Type *>::iterator i = storage.begin(); i != storage.end(); i++) {
		(*i)->Cout();
	}
	cout << endl;
}