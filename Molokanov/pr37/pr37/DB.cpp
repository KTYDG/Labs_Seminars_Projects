#include "DB.h"
bool DB::turn = 0;

DB& DB::operator=(const DB& cl) {
	int amount = 0;
	if(this != &cl) {
		for(set<Base*, predicate>::iterator i = s.begin(); i != s.end(); ++i) {
			delete* i;
		}
		if(turn == 0) {
			for(set<Base*, predicate>::const_iterator i = cl.s.begin(); i != cl.s.end(); ++i) {
				if(amount == cl.count / 2) break;
				s.insert((*i)->clone());
				amount++;
			}
			turn = 1;
		}
		else {
			for(set<Base*, predicate>::const_reverse_iterator i = cl.s.crbegin(); i != cl.s.crend(); ++i) {
				if(amount == cl.count / 2) break;
				s.insert((*i)->clone());
				amount++;
			}
			turn = 0;
		}
	}
	return *this;
}

DB::~DB() { // Деструктор ломал программу из-за преждевременного удаления db1
	//for(set<Base*, predicate>::iterator i = s.begin(); i != s.end(); ++i) {
	//	delete* i;
	//}
	//s.clear();
}

void DB::del() {
	for(set<Base*, predicate>::iterator i = s.begin(); i != s.end(); ++i) {
		delete* i;
	}
	s.clear();
}

void DB::print() {
	for(set<Base*, predicate>::iterator i = s.begin(); i != s.end(); ++i) {
		cout << (*i)->get() << "\t(" << (*i)->compare() << ")" << endl;
	}
}

void DB::add(Base* b) {
	s.insert(b);
	// Тут есть утечки, если не удалять недобавленный элемент из-за повторений
	if(s.size() > count) count++;
	else delete b;
}

