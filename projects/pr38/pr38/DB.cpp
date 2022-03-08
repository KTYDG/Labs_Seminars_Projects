#include "pch.h"
#include "DB.h"
#include "Parser.h"

DB::DB() {
	wstring s = L"";

	wifstream input;
	input.open("article.txt");
	if(!input) {
		cout << "Не удалось открыть файл" << endl;
		return;
	}
	while(!input.eof()) {
		getline(input, s, L'\n');
		if(!s.empty()) {
			Parser par(s.c_str());
			m.emplace(s, par.parse());
		}
	}
}
DB::~DB() {
	for(map<wstring, Type*>::iterator i = m.begin(); i != m.end(); ++i) {
		delete i->second;
	}
}

void DB::frame() {
	wcout << "+" << setfill(L'-')
		<< setw(3) << L"" << left << L"+"
		<< setw(40) << L"" << L"+"
		<< setw(62) << L"" << L"+"
		<< setw(47) << L"" << L"+"
		<< setw(6) << L"" << L"+"
		<< setw(8) << L"" << L"+"
		<< setw(31) << L"" << L"+"
		<< setfill(L' ')
		<< endl;
}
void DB::print(bool reverse) {
	frame();
	wcout << "| "
		<< setw(2) << L"№" << left << L"| "
		<< setw(39) << L"Authors" << L"| "
		<< setw(61) << L"Title" << L"| "
		<< setw(46) << L"Publisher" << L"| "
		<< L"Year" << L" | "
		<< setw(6) << "Type" << L" | "
		<< setw(29) << "Doi" << L" |"
		<< endl;
	frame();

	if(reverse == 0) {
		for(map<wstring, Type*>::iterator i = buffer.begin(); i != buffer.end(); ++i) {
			wcout << "| "
				<< setw(2) << i->second->num_return() << left << L"| "
				<< setw(39) << i->second->aut_return(1) << L"| "
				<< setw(61) << i->second->tit_return() << L"| "
				<< setw(46) << i->second->pub_return() << L"| "
				<< i->second->yea_return() << L" | ";
			if(i->second->typ_return() == 1) { wcout << setw(6) << L"Книга" << L" | "; }
			else wcout << L"Статья" << L" | ";
			wcout << setw(29) << i->second->doi_return() << L" |" << endl;
		}
	}
	else {
		for(map<wstring, Type*>::reverse_iterator i = buffer.rbegin(); i != buffer.rend(); ++i) {
			wcout << "| "
				<< setw(2) << i->second->num_return() << left << L"| "
				<< setw(39) << i->second->aut_return(1) << L"| "
				<< setw(61) << i->second->tit_return() << L"| "
				<< setw(46) << i->second->pub_return() << L"| "
				<< i->second->yea_return() << L" | ";
			if(i->second->typ_return() == 1) { wcout << setw(6) << L"Книга" << L" | "; }
			else wcout << L"Статья" << L" | ";
			wcout << setw(29) << i->second->doi_return() << L" |" << endl;
		}
	}

	frame();
}
void DB::sort(char a) {
	if(state != a) {
		buffer.clear();
		switch(a) {
			case '1':
				for(auto&& i : m) {
					buffer.emplace(to_wstring(i.second->num_return()), i.second);
				}
				break;
			case '2':
				for(auto&& i : m) {
					buffer.emplace(i.second->aut_return(), i.second);
				}
				break;
			case '3':
				for(auto&& i : m) {
					buffer.emplace(i.second->tit_return(), i.second);
				}
				break;
			case '4':
				for(auto&& i : m) {
					buffer.emplace(i.second->pub_return(), i.second);
				}
				break;
			case '5':
				for(auto&& i : m) {
					buffer.emplace(to_wstring(i.second->yea_return()), i.second);
				}
				break;
			case '7':
				for(auto&& i : m) {
					if(i.second->doi_return() != L"")
						buffer.emplace(i.second->doi_return(), i.second);
				}
				break;
		}
		state = a;
		state2 = 0;
		/*m.swap(buffer);*/
		print();
	}
	else if(state2 == 0) { state2 = 1; print(state2); }
	else { state2 = 0; print(); }
}

