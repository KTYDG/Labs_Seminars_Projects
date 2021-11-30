#include "pch.h"
#include "Small.h"

Small::Small(int X, int Y) {
	figure.emplace_back(new int(X), new int(Y));
}

Small::~Small() {
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		delete i->first;
		delete i->second;
	}
}