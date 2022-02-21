#include "Lowercase.h"

Lowercase::Lowercase(wstring get) { w = new wstring(get); }
Lowercase::Lowercase(const Lowercase& clone) { w = new wstring(*clone.w); }

void Lowercase::Clone(list<Word*>&l) { /*l.push_back(new Lowercase(*this));*/ }
wstring Lowercase::Out() { return *w; }


Lowercase::~Lowercase() { delete w; }
