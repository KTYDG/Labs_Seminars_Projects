#include "Base.h"
char Base::B='B';

Base::Base() {
	x = new int(54);
}

Base::Base(const Base& cl) {
	x = new int(*cl.x);
}

Base::Base(int xxx) {
	x = new int(xxx);
}

Base::~Base() {
	delete x;
}

Base* Base::clone() {
	return new Base(*this);
}

int Base::get() {
	return *x;
}

int Base::compare() {
	return *x;
}

char Base::who() {
	return B;
}