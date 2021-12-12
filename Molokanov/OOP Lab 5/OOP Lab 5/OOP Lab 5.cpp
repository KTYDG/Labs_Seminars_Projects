#include <iostream>
#include <vector>
using namespace std;

/*class SP;*/ // Создаем прототип класса

class MP {
protected:
	MP() {}
public:
	virtual ~MP() {}
	virtual void Clone(vector<MP*>& v) { v.push_back(new MP(*this)); }
	friend void add(vector<MP*>& v);
};

class SP :public MP {
protected:
	SP() {}
	
public:
	~SP() {}
	void Clone(vector<MP*>& v) { v.push_back(new SP(*this)); }
	friend void add(vector<MP*>& v);
};

void add(vector<MP*>& v) {
	MP* mp = new MP;
	SP* sp = new SP;
	v.push_back(mp);
	v.push_back(sp);
}

int main() {
	{
		vector<MP*>V;
		vector<MP*>V2;
		for (int i = 0; i < 3; i++) {
			add(V);
		}
		for (int i = 0; unsigned(i) < V.size(); i++) {
			V[i]->Clone(V2);
		}
		for (int i = 0; unsigned(i) < V.size(); i++) {
			delete V[i];
			delete V2[i];
		}
	}
	_CrtDumpMemoryLeaks();
	return 0;
}