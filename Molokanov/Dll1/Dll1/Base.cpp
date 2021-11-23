#include "pch.h"
#include "Base.h"

Base::Base() { a = new string("Base"); }

Base::~Base() { delete a; }