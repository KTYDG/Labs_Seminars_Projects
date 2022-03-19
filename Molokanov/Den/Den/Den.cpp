#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

class Parent {
public:
	string* str;

	Parent() {
		str = new string("OOP");
	}
	Parent(string x) {
		str = new string(x);
	}
	Parent(const Parent& cl) {
		str = new string(*cl.str);
	}
	virtual ~Parent() {
		delete str;
	}

	virtual void Copy(vector<Parent*>&v) {
		v.push_back(new Parent(*this));
	}
	virtual string Get() {
		return *str;
	}
};
class Child: public Parent {
public:
	Child() {
		*str = "OOP_CHILD";
	}
	Child(string x): Parent(x) {}
	Child(const Child& cl): Parent(cl) {}
	~Child() {}

	void Copy(vector<Parent*>&v) {
		v.push_back(new Child(*this));
	}
	string Get() {
		return *str;
	}
};

class DB {
public:
	vector<Parent*>v;

	DB() = default;
	DB(const DB& cl) {
		for(vector<Parent*>::const_iterator i = cl.v.begin(); i != cl.v.end(); ++i) {
			(*i)->Copy(v);
		}
	}
	~DB() {
		for(vector<Parent*>::iterator i = v.begin(); i != v.end(); ++i) {
			delete *i;
		}
	}

	void Add(Parent* p) {
		v.push_back(p);
	}
	void Print() {
		for(vector<Parent*>::iterator i = v.begin(); i != v.end(); ++i) {
			cout << (*i)->Get() << endl;
		}
	}
};

int main() {
	DB db1;
	db1.Add(new Parent("PPP"));
	db1.Add(new Child());
	db1.Add(new Child("TTT"));
	db1.Add(new Parent());

	DB db2(db1);

	cout << "\ndb1:\n";
	db1.Print();
	db1.~DB();

	cout << "\ndb2:\n";
	db2.Print();
}