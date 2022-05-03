#include <iostream>
#include <vector>
using namespace std;



int fact(int n) {
	if(n == 0) {
		return 1;
	}
	else {
		n*fact(n - 1);
	}
}
void dY(vector<float>&dy, int&j) {
	j--;
	if(j != 1) {
		vector<float>dyy;
		for(int i = 0; i < j - 1; i++) {
			dyy.push_back(dy[i + 1] - dy[i]);
		}
		dy = dyy;
		dY(dy, j);
	}
}


int main() {
	short n;
	vector<float>x;
	vector<float>y;
	float t, dot;
	cout << "n = ";  cin >> n;
	cout << "dot = ";  cin >> dot;
	for(int i = 0; i < n; i++) {
		cin >> t;
		x.push_back(t);
		cin >> t;
		y.push_back(t);
	}
	const float h = x[1] - x[0];

	vector<float>dy;
	for(int i = 0; i < n - 1; i++) {
		dy.push_back(y[i + 1] - y[i]);
	}
	int dr = n - 1;
	dY(dy, dr);
	for(int i = 0; i < dy.size(); i++) {
		cout << dy[i] << endl;
	}


	//for(int i = 0; i < n - 1; i++) {

	//}
	//float xx = 1.0, yy = y[0];
	//for(int i = 1; i < n; i++) {
	//	xx = 1.0;
	//	for(int k = 0; k < i; k++) {
	//		xx *= (dot - x[k]);
	//	}
	//	yy += xx*;
	//}
	//cout << "\ny = " << yy;


	return 0;
}