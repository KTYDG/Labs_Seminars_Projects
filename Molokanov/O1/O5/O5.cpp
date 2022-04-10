#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	int min, min2, min3;
	cin >> n;
	/*vector<vector<int>> arr(n, vector<int>(2));*/
	int **arr = new int*[n];
	for(int i = 0; i < n; i++) {
		arr[i] = new int[2];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	int max = -1;
	for(int i = 0; i < n - 1; i++) {
		min = abs(arr[i][0] - arr[i + 1][0]) * abs(arr[i][0] - arr[i + 1][0]) + abs(arr[i][1] - arr[i + 1][1]) * abs(arr[i][1] - arr[i + 1][1]);
		for(int j = i + 1; j < n - 1; j++) {
			min2 = abs(arr[i][0] - arr[j][0]) * abs(arr[i][0] - arr[j][0]) + abs(arr[i][1] - arr[j][1]) * abs(arr[i][1] - arr[j][1]);
			if(min2 < min) min = min2;
		}
		if(max < min) max = min;
	}
	//int ii;
	//min = NULL;
	//for(int i = 0; i < n - 1; i++) {
	//	for(int j = i + 1; j < n - 1; j++) {
	//		min2 = abs(arr[i][0] - arr[j][0]) * abs(arr[i][0] - arr[j][0]) + abs(arr[i][1] - arr[j][1]) * abs(arr[i][1] - arr[j][1]);
	//		if(min == NULL or min2 < min) {
	//			ii = j;
	//			min = min2;
	//		}
	//	}
	//	min3 = min;
	//}
	cout << max;

	return 0;
}