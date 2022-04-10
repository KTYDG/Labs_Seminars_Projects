#include <iostream>
using namespace std;

int main() {
	int f1 = 0, f2 = 0, n;
	cin >> n;
	int **arr = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[2];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		if(arr[i][0] == 3 and arr[i][1] == 1) f1++;
		else if(arr[i][0] == 1 and arr[i][1] == 2) f1++;
		else if(arr[i][0] == 2 and arr[i][1] == 3) f1++;

		if(arr[i][0] == 1 and arr[i][1] == 3) f2++;
		else if(arr[i][0] == 3 and arr[i][1] == 2) f2++;
		else if(arr[i][0] == 2 and arr[i][1] == 1) f2++;
	}

	if(f1 > f2) cout << f1;
	else cout << f2;

	return 0;
}