#include "pch.h"
#include "Small.h"

Small::Small(){}
Small::Small(int X, int Y) {
	figure.emplace_back(new int(X), new int(Y));
}
Small::Small(const Small& cl) {
	for(list< pair<int*, int*>>::const_iterator i = cl.figure.begin(); i != cl.figure.end(); ++i) {
		figure.emplace_back(new int(*(i->first)), new int(*(i->second)));
	}
}

void Small::Clone(list<Shape*>&l) {
	l.push_back(new Small(*this));
}
void Small::Add(int X, int Y) {
	figure.emplace_back(new int(-X), new int(Y));
}
void Small::Print() {
	cout << "Малый объект:\n" << "\t" << setw(3) << "  X" << "\t" << setw(3) << "  Y" << endl;
	int ii = 1;
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		cout << "[" << ii << "]\t" << *(i->first) << "\t" << *(i->second) << endl;
		ii++;
	}
	cout << endl;
}

Small::~Small() {
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		delete i->first;
		delete i->second;
	}
}