#include "pch.h"

class Base {
public:
	vector<int>*v;
	Base() {
		v = new vector<int>;
		v->push_back(54);
		v->push_back(666);
	}
	Base(const Base& c) {
		v = new vector<int>;
		for(vector<int>::const_iterator i = c.v->begin(); i != c.v->end(); ++i) {
			v->push_back(*i);
		}
	}
	virtual ~Base() {
		delete v;
	}

	virtual void Copy(vector<Base*>&vv) {
		vv.push_back(new Base(*this));
	}
};
class Derived: public Base {
public:
	list<float*>*l;
	Derived() {
		l = new list<float*>;
		l->push_back(new float(3.14));
		l->push_back(new float(2.88));
	}
	Derived(const Derived& c) {
		l = new list<float*>;
		for(list<float*>::const_iterator i = c.l->begin(); i != c.l->end(); ++i) {
			l->push_back(new float(**i));
		}
	}
	~Derived() {
		for(list<float*>::iterator i = l->begin(); i != l->end(); ++i) {
			delete *i;
		}
		delete l;
	}

	void Copy(vector<Base*>&vv) {
		vv.push_back(new Derived(*this));
	}
};

class DB {
private:
	vector<Base*>vv;
public:
	DB() = default;
	~DB() {
		for(int i = 0; i < vv.size(); i++) {
			delete vv[i];
		}
	}
	DB& operator=(const DB& c) {
		if(this == &c) return *this;
		for(int i = 0; i < vv.size(); i++) {
			delete vv[i];
		}
		vv.clear();
		for(vector<Base*>::const_iterator i = c.vv.begin(); i != c.vv.end(); ++i) {
			(*i)->Copy(vv);
		}
	}

	void add(Base* b) {
		vv.push_back(b);
	}

};

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
	DB db1, db2;
	db1.add(new Base);
	db1.add(new Derived);
	db2 = db1;

	return 0;
}