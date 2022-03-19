#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Base {
public:
	vector <int> *v;
	Base() {
		v = new vector<int>;
		(*v).push_back(69);
	}
	Base(const Base& obj) {
		v = new vector<int>;

		for(vector <int>::iterator it = obj.v->begin(); it != obj.v->end(); ++it)
			v->push_back(*it);
	}

	virtual Base* copy() { return new Base(*this); }

	virtual ~Base() { delete v; }
};

class Derived: public Base {
public:
	list<float*> *l;
	Derived() {
		l = new list<float*>;
		(*l).push_back(new float(6.9));
	}

	Derived(const Derived& obj) {
		l = new list<float*>;

		for(list<float*>::iterator it = obj.l->begin(); it != obj.l->end(); ++it)
			(*l).push_back(new float(**it));
	}

	Derived* copy() { return new Derived(*this); }

	~Derived() {
		for(list<float*>::iterator it = (*l).begin(); it != (*l).end(); ++it)
			delete *it;
		delete l;
	}
};

class DB {
	vector <Base*> db;
public:
	DB() {}
	~DB() {
		for(vector <Base*>::iterator it = db.begin(); it != db.end(); ++it)
			delete *it;
	}

	void add(Base* obj) {
		db.push_back(obj);
	}

	DB& operator= (const DB& obj) {
		if(&obj == this) return *this;

		for(vector <Base*>::iterator it = db.begin(); it != db.end(); ++it)
			delete *it;
		db.clear();

		for(vector <Base*>::const_iterator it = obj.db.begin(); it != obj.db.end(); ++it)
			db.push_back((*it)->copy());

	}
};

int main() {
	DB db1, db2;
	db1.add(new Base);
	db1.add(new Derived);
	db2 = db1;
}