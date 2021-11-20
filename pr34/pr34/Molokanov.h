#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <codecvt>
using namespace std;

class Molokanov {
public:
	wstring *m_txt;

	Molokanov();
	Molokanov(const Molokanov& clone);

	virtual void Input();
	virtual wstring Get();
	virtual void Clone(vector<Molokanov*>& v);

	virtual ~Molokanov();
};