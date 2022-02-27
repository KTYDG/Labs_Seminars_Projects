#include "pch.h"


struct comparator {
	bool operator()(wstring s1, wstring s2) {
		return s1 < s2;
	}
} compare;

void OpenFile(list<wstring>&source) {
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
		if(!s.empty()) source.push_back(s);
	}
	source.sort(compare);
}

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
	locale::global(locale("ru_RU.UTF-8"));

	list<wstring>source;

	OpenFile(source);

	return 0;
}
