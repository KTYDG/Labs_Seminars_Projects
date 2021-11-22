#include "DB.h"


DB::DB() {}

DB::DB(const DB& clone) {
	for(list<Word*>::const_iterator i = clone.begin(); i != clone.end(); ++i) {
		(*i)->Clone(*this);
	}
}
DB& DB::operator=(const DB& clone) {
	if(this != &clone) {
		for(list<Word*>::iterator i = begin(); i != end(); ++i) {
			delete (*i);
		}
		clear();
		for(list<Word*>::const_iterator i = clone.begin(); i != clone.end(); ++i) {
			(*i)->Clone(*this);
		}
	}
	return *this;
}

void DB::Add() {

	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wifstream input;
	input.open(L"Base_Text.txt");
	input.imbue(utf8_locale);

	int count;
	wstring help, h;
	if(!input) { wcout << L"Can't open file Base_Text.txt"; }
	else {
		while(!input.eof()) {
			count = 0;
 			input >> help;
			// Мне не нравилось, что знаки пунктуации переносились
			// вместе со словами, тут они удаляются
			for(wstring::iterator i = help.end()-1; i != help.begin(); --i) {
				if(isalpha(*i) or (*i >= 1040 and *i <= 1103)) break;
				else count += 1;
			}
			help.resize(help.size() - count); // Удалениe конца
			// Идет удаление знаков перед словом, например ( или "
			count = 0;
			for(wstring::iterator i = help.begin(); i != help.end(); ++i) {
				if(isalpha(*i) or (*i >= 1040 and *i <= 1103)) break;
				else count += 1;
			} 
			help.erase(0, count); // Удаление начала
			if(help == L"") continue; // Были ошибки, когда пустая строка попадала и происходил выход за вектор
			else {
				wstring::iterator i = help.begin();
				if(/*isupper(*i) or*/(*i >= 65 and *i <= 90) or (*i >= 1040 and *i <= 1071)) { push_back(new Uppercase(help)); } //	почему-то функция isupper хватает русские маленькие буквы(некоторые), 
																																 // пришлось от нее отказаться
				else if(islower(*i) or (*i >= 1072 and *i <= 1103)) { push_back(new Lowercase(help)); }
			}
		}
	}
}
// Выводит абсолютно все слова, так как нет ограничения в условии задания
void DB::Output() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wofstream output;
	output.open(L"Uppercase.txt");	
	output.imbue(utf8_locale);

	if(!output) { wcout << L"Can't open file Uppercase.txt"; }
	else {
		for(list<Word*>::iterator i = begin(); i != end(); ++i) {
			output << (*i)->Out() << endl;
		}
	}
	output.close();
}

DB::~DB() {	
	//for(list<Word*>::iterator i = begin(); i != end(); ++i) {  // Вывод всех слов в консоль по строкам
	//	wcout << (*i)->Out() << endl;
	//}
	for(list<Word*>::iterator i = begin(); i != end(); ++i) {
		delete (*i);
	}

}