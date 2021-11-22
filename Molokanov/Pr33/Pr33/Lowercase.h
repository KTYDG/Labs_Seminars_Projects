#pragma once
#include "Word.h"

class Lowercase: public Word {
public:
	Lowercase(wstring get);
	Lowercase(const Lowercase& clone);

	void Clone(list<Word*>&l);
	wstring Out();

	~Lowercase();
};

