#pragma once
#include "Molokanov.h"

class Danila: public Molokanov {
public:
	wstring *m_txt;

	Danila();
	Danila(const Danila& clone);

	void Input();
	wstring Get();
	void Clone(vector<Molokanov*>& v);

	~Danila();
};