#include "pch.h"

void OpenFile() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wstring s = L"";
	wifstream input;

	if(number == 362) input.open("362.txt");
	else if(number == 112) input.open("112.txt");
	if(!input) {
		cout << "�� ������� ������� ����" << endl;
		return;
	}
	input.imbue(utf8_locale);
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) storage.push_back(new Type(s));
	}
	sort(storage.begin(), storage.end(), compare);
}





int main() {
	
}
