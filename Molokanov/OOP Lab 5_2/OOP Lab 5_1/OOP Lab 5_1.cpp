#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

class Base {
public:
	string *a;
	Base() { a = new string("Base"); }
	Base(const Base& c) { a = new string(*c.a); }
	virtual string Out() { return *a; }
	virtual void Add(vector<Base*>& v) { v.push_back(new Base(*this)); }
	virtual ~Base() { delete a; }
};
class Derived: public Base {
public:
	string *b;
	Derived() { b = new string("Derived"); }
	Derived(const Derived& c) { b = new string(*c.b); }
	string Out() { return *b; }
	void Add(vector<Base*>& v) { v.push_back(new Derived(*this)); }
	~Derived() { delete b; }
};


int main() {
	srand(time(NULL));
	vector<Base*>Copy; // ����� ��������� ����� ��������
	vector<Base*>original;

	for(int i = 0; i < 7; i++) {
		if(rand() % 2 == 0) {
			Base* b = new Base; // ��������� ������ Base
			original.push_back(b); // �������� ���������� � ������ original(��� ��������)
			b->Add(Copy); // ����� ������� Base ���������� � ������ Copy
		}
		else {
			Derived* d = new Derived; // ��������� ������ Derived
			original.push_back(d); // �������� ���������� � ������ original(��� ��������)
			d->Add(Copy); // ����� ������� Derived ���������� � ������ Copy
		}
	}

	for(int i = 0; unsigned(i) < Copy.size(); i++) {
		cout << "[" << i << "] value: " << Copy[i]->Out() << endl;
	}

	for(int i = 0; unsigned(i) < original.size(); i++) {
		delete Copy[i];
		delete original[i];
	}
	return 0;
}