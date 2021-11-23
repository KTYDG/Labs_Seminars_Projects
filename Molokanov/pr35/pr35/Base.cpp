#include "pch.h"
#include "Base.h"


Base::Base() { a = new string("Base"); }

string Base::Get(int i) { return *a; }

Base::~Base() { delete a; }