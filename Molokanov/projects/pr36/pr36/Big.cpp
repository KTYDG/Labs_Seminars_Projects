#include "pch.h"
#include "Big.h"

Big::Big() {}
Big::Big(int X, int Y) {
	figure.emplace_back(new int(X), new int(Y));
}
Big::Big(const Big& cl) {
	for(list< pair<int*, int*>>::const_iterator i = cl.figure.begin(); i != cl.figure.end(); ++i) {
		figure.emplace_back(new int(*(i->first)), new int(*(i->second)));
	}
}

void Big::Clone(list<Shape*>&l) {
	l.push_back(new Big(*this));
}
void Big::Add(int X, int Y) {
	figure.emplace_back(new int(X), new int(Y));
}
void Big::Print() {
	cout << "Большой объект:\n" << "\t" << setw(3) << "  X" << "\t" << setw(3) << "  Y" << endl;
	int ii = 1;
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		cout << "[" << ii << "]\t" << * (i->first) << "\t" << *(i->second) << endl;
		ii++;
	}
	cout << endl;
}

Big::~Big() {
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		delete i->first;
		delete i->second;
	}
}
