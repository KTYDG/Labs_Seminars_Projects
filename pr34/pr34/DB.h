#pragma once
#include "Danila.h"
#include <typeinfo>
#include <algorithm>	
using namespace std;

template<typename T>
class DB: public vector<T> {
public:
	DB();
	DB(const DB& clone);

	DB<T>& operator=(const DB& clone);

	void Add(T t);
	void EErase();
	void Output();

	template<class T>
	friend bool comp(T a, T b);
	template<class T>
	friend wostream& operator<< <>(wostream& wcout, const DB<T>& db);

	~DB();
};

template<class T>
bool comp(T a, T b) {
	return (a->Get()) == (b->Get());
}

template<class T>
wostream& operator<< <> (wostream& wcout, const DB<T>& db) {
	for(typename vector<T>::const_iterator i = db.begin(); i != db.end(); ++i) {
		wcout << (*i)->Get();
	}
	return wcout;
}
