#pragma once
#include "Word.h"

class Uppercase: public Word {
public:
	Uppercase(wstring get);
	Uppercase(const Uppercase& clone);

	void Clone(list<Word*>&l);
	wstring Out();

	~Uppercase();
};

