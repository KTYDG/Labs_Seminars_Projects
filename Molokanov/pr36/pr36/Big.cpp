#include "pch.h"
#include "Big.h"

Big::Big(int X, int Y) {
	figure.emplace_back(new int(X), new int(Y));
}

Big::~Big() {
	for(list< pair<int*, int*>>::iterator i = figure.begin(); i != figure.end(); ++i) {
		delete i->first;
		delete i->second;
	}
}
