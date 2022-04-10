#include <iostream>


using namespace std;


int main() {
	int n;
	cin >> n;
	bool h = 0, a = 0, r = 0, d = 0;
	string hard;
	string realhard;
	cin >> hard;

	for(string::reverse_iterator i = hard.rbegin(); i != hard.rend(); ++i) {
		if(h == 1) break;
		if(*i == 'D' and d == 0) {
			realhard += *i;
			d = 1;
		}
		else if(*i == 'R' and r == 0 and d == 1) {
			realhard += *i;
			r = 1;
		}
		else if(*i == 'A' and r == 1 and d == 1 and h == 0) {
			realhard += *i;
			a = 1;
		}
		else if(*i == 'H' and h == 0 and r == 1 and d == 1 and a == 1) {
			realhard += *i;
			h = 1;
		}
	}

	string hardd;
	if(h == 1 and a == 1 and r == 1 and d == 1) {
		for(string::reverse_iterator i = realhard.rbegin(); i != realhard.rend(); ++i) {
			hardd += *i;
		}
		cout << hardd;
	}
	else cout << "EASY";

	return 0;
}