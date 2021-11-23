#include "pch.h"
#include "Base.h"


Base::Base() { a = new string("Base"); }

string Base::Get() { return *a; }

Base::~Base() { delete a; }