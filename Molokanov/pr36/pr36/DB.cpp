#include "pch.h"
#include "DB.h"

map<string, int>DB::token = {
	{"SC", 2},
	{"SP", 3},
	{"LT", 4},
	{"VS", 5},
	{"PU", 6},
	{"PA", 8},
};

DB::DB() {/*Tokens()*/ }
DB::DB(const DB& cl) {
	for(list<Shape*>::const_iterator i = cl.l.begin(); i != cl.l.end(); ++i) {
		(*i)->Clone(l);
	}
}

void DB::Parser() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	string line;
	string task;
	int c = 1;
	int Points = 0;
	list<pair<int, int>>dots;

	ifstream input;
	input.open("test.hpg");
	if(!input) {
		cout << "Не удалось открыть файл" << endl;
		return;
	}
	while(!input.eof()) {
		getline(input, line, ';');
		if(line.length() >= 2) {
			task = line.substr(0, 2);
			line.erase(0, 2);
			//// Тут нужна проверка на существование ключа
			//// Иначе будет ошибка на чтении не существующего ключа
			//map<string, int /*Mapper**/>::iterator i = token.find(task);
			//if(i != token.end()) {
			//	token[task]->command(line);
			//}

			c = token[task];
			switch(c) {
			case 1:
				//cout << "Plotter initialized" << endl;
				break;
			case 2:
				cout << "Scale is set" << endl;
				break;
			case 3:
				if(line == "") cout << "Pen deselected" << endl;
				else cout << "Pen " << line << " selected" << endl;
				break;
			case 4:
				cout << "Line type is set" << endl;
				break;
			case 5:
				cout << "Speed " << line << " is set" << endl;
				break;
			case 6:
				if(Points > 0 and Points <= 2) {
					Shape* s = new Small();
					for(list<pair<int, int>>::iterator i = dots.begin(); i != dots.end(); ++i) {
						s->Add(i->first, i->second);
					}
					dots.clear();
					l.push_back(s);
				}
				else if(Points > 2) {
					Shape* s = new Big();
					for(list<pair<int, int>>::iterator i = dots.begin(); i != dots.end(); ++i) {
						s->Add(i->first, i->second);
					}
					dots.clear();
					l.push_back(s);
				}
				Points = 0;
				break;
			case 8:
				Points += 1;
				string fir = "", sec = ""; bool flag = 0;
				for(string::iterator i = line.begin(); i != line.end(); ++i) {
					if(!isalnum(*i)) {
						flag = 1;
						continue;
					}
					if(flag == 0) fir += *i;
					else sec += *i;
				}
				dots.emplace_back(atoi(fir.c_str()), atoi(sec.c_str()));
				break;
			}
		}
	}
	cout << "Работа плоттера завершена\n\n";
}
//void DB::Tokens() {
//	//token["IN"] = 1;// new Initialize();
//	token["SC"] = 2;//new Scale();
//	token["SP"] = 3;//new SelectPen();
//	token["LT"] = 4;//new LineType();
//	token["VS"] = 5;//new VelocitySelect();
//	token["PU"] = 6;//new PenUp();
//	//token["PD"] = 7;//new PenDown();
//	token["PA"] = 8;//new PlotAbsolute();
//}
void DB::Out() {
	for(list<Shape*>::iterator i = l.begin(); i != l.end(); ++i) {
		(*i)->Print();
	}
}
DB& DB::operator=(const DB& cl) {
	if(&cl != this) {
		for(list<Shape*>::iterator i = l.begin(); i != l.end(); ++i) {
			delete *i;
		}
		l.clear();
		for(list<Shape*>::const_iterator i = cl.l.begin(); i != cl.l.end(); ++i) {
			(*i)->Clone(l);
		}
	}
	return *this;
}

DB::~DB() {
	for(list<Shape*>::iterator i = l.begin(); i != l.end(); ++i) {
		delete *i;
	}
}