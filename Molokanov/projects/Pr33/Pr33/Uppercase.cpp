#include "Uppercase.h"

Uppercase::Uppercase(wstring get) { w = new wstring(get); }
Uppercase::Uppercase(const Uppercase& clone) { w = new wstring(*clone.w); }

void Uppercase::Clone(list<Word*>&l) { l.push_back(new Uppercase(*this)); }
wstring Uppercase::Out() { return *w; }

Uppercase::~Uppercase() { delete w; }
