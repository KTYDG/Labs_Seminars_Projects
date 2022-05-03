#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<float>x;
	vector<float>y;
	float t, dot;
	short n;
	cout << "n = ";  cin >> n;
	cout << "dot = ";  cin >> dot;
	for(int i = 0; i < n; i++) {
		cin >> t;
		x.push_back(t);
	}
	for(int i = 0; i < n; i++) {
		cin >> t;
		y.push_back(t);
	}
	float xx, yy = 0;
	for(int i = 0; i < n; i++) {
		xx = 1.0;
		for(int k = 0; k < n; k++) {
			if(i != k) xx *= (dot - x[k]) / (x[i] - x[k]);
		}
		yy += y[i] * xx;
	}
	cout << "\ny = " << yy;
	return 0;
}