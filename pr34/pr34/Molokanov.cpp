#include "Molokanov.h"

Molokanov::Molokanov() {
	Input();
}
Molokanov::Molokanov(const Molokanov& clone) {
	m_txt = new wstring(*clone.m_txt);
}

void Molokanov::Input() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wifstream input;
	input.open(L"�������.txt");
	input.imbue(utf8_locale);

	wstring check, m_txt_copy;
	if(!input) { wcout << L"Can't open file \"�������.txt\""; return; }
	else {
		while(!input.eof()) {
			getline(input, check);
			if(check == L"\"�� ������ ����, ��� �����!") break;
			m_txt_copy += check + L"\n";
		}
		m_txt = new wstring(m_txt_copy);
	}
	input.close();
}
wstring Molokanov::Get() { return *m_txt; }
void Molokanov::Clone(vector<Molokanov*>&v) { v.push_back(new Molokanov(*this)); }

Molokanov::~Molokanov() { delete m_txt; }