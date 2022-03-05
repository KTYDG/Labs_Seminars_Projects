#include "pch.h"
#include "DB.h"
#include "Parser.h"

DB::DB() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wstring s = L"";

	wifstream input;
	input.open("article.txt");
	if(!input) {
		cout << "Не удалось открыть файл" << endl;
		return;
	}
	input.imbue(utf8_locale);
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) {
			Parser par(s.c_str());
			m.emplace(s, par.parse());
		}
	}
}
DB::~DB() {
	for(map<wstring, Type*>::iterator i = m.begin(); i != m.end(); ++i) {
		delete i->second;
	}
}