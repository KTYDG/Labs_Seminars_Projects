#include "pch.h"
#include "DB.h"

DB::DB() {
	//Tokens();
}

//void DB::Parser() {
//	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());
//
//	string line;
//	string task;
//
//	ifstream input;
//	input.open("test.hpg");
//	if(!input) {
//		cout << "Не удалось открыть файл";
//		return;
//	}
//	while(!input.eof()) {
//		getline(input, line, ';');
//		if(line.length() >= 2) { 
//			task = line.substr(2);
//			token[task]->command();
//		}
//	}
//}
//void DB::Tokens() {
//	token["IN"] = new Initialize();
//	token["SC"] = new Scale();
//	token["SP"] = new SelectPen();
//	token["LT"] = new LineType();
//	token["VS"] = new VelocitySelect();
//	token["PU"] = new PenUp();
//	token["PD"] = new PenDown();
//}

DB::~DB() {

}