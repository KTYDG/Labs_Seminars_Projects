#include "pch.h"
#include "DB.h"

DB::DB(const DB& cl) {
	for(vector<Parent*>::const_iterator i = cl.v.begin(); i != cl.v.end(); ++i) {
		(*i)->Copy(v);
	}
}
DB::~DB() {
	for(vector<Parent*>::iterator i = v.begin(); i != v.end(); ++i) {
		delete *i;
	}
}

void DB::Add(Parent* p) {
	v.push_back(p);
}
void DB::Print() {
	for(vector<Parent*>::iterator i = v.begin(); i != v.end(); ++i) {
		cout << (*i)->Get() << endl;
	}
}