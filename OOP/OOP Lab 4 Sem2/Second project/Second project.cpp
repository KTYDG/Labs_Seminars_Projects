#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

class A {
public:
	string s;
	A() {
		cout << "Конструктор по умолчанию класса А" << endl;
	}

	A(const char*a) {
		s = a;
		cout << "Пользовательский Конструктор класса A" << endl;
		cout << s << endl;
	}
	virtual ~A() {
		cout << "Деструктор класса A" << endl;
		cout << typeid(*this).name() << endl;
	}
};

class B: public A {
public:
	B() {
		cout << "Конструктор  класса B" << endl;
	}
	B(const char* a):A(a) {
		cout << "Пользовательский Конструктор класса B" << endl;
		cout << a << endl;
	}
	~B() {
		cout << "Деструктор класса B" << endl;
		cout << typeid(*this).name() << endl;
	}
};

void del(vector<A*> & v) {
	for(int i = 0; i < v.size(); i++)
		delete v[i];
}

vector<A*>v;

int main() {
	setlocale(LC_ALL, "Russian");
	v.push_back(new A("first"));
	v.push_back(new B("second"));
	del(v);
	return 0;
}
