#include "pch.h"
#include "DB.h"

void DB::Parser() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	string command;

	ifstream input;
	input.open("test.hpg");

}