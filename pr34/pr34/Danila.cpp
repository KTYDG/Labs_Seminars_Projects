#include "Danila.h"

Danila::Danila() {
	Input();
}
Danila::Danila(const Danila& clone) {
	m_txt = new wstring(*clone.m_txt);
}

void Danila::Input() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wifstream input;
	input.open(L"Муравей.txt");
	input.imbue(utf8_locale);

	short flag = 0;
	wstring check, m_txt_copy;
	if(!input) { wcout << L"Can't open file \"Муравей.txt\""; return; }
	else {
		while(!input.eof()) {
			getline(input, check);
			if(check == L"\"Не оставь меня, кум милый!" or flag == 1) {
				m_txt_copy += check + L"\n";
				flag = 1;
			}
			else continue;
		}
		m_txt = new wstring(m_txt_copy);
	}
	input.close();
}
wstring Danila::Get() { return *m_txt; }
void Danila::Clone(vector<Molokanov*>& v) { v.push_back(new Danila(*this)); }

Danila::~Danila() { delete m_txt; }