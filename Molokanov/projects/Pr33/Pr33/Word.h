#pragma once
#include <string>
#include <list>
using namespace std;

class Word {
public:
	wstring* w;
	virtual void Clone(list<Word*>&l) = 0;
	virtual wstring Out() = 0;

	virtual ~Word() = default;
};

