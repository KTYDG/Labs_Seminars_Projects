#include <iostream>
#include <iomanip>
#include <vector>
#include <windows.h>
using namespace std;
enum ConsoleColor {
	Black = 0,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Yellow = 6,
	White = 15
};
void SetColor(ConsoleColor bg, ConsoleColor tx) { //задает цвет
	HANDLE hC = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hC, (WORD)((bg << 4) | tx));
}
void GetMatrixA(int n, vector<vector<double>>X, vector<float>b) {
	cout << "Matrix A:\n";
	cout << fixed; cout.precision(5);
	for(int i = 0; i < n + 1; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0) { //вывод порядка столбцов
				SetColor(Black, Yellow);
				cout << setw(10) << j + 1;
				if(j == n - 1) cout << setw(11) << "b";
				SetColor(Black, White);
				continue;
			}
			if(i > 0 and j == 0) { //вывод порядка строк
				SetColor(Black, Yellow);
				cout << setw(3) << i;
				SetColor(Black, White);
			}
			if(i > 0) cout << setw(10) << X[i - 1][j]; //вывод белым остальные числа
			if(j == n - 1) cout << " | " << left << setw(10) << b[i - 1] << right;
		}
		cout << "\n\n";
	}
}
void GetMatrixG(int n, vector<vector<double>>X) {
	cout << "\nMatrix G:\n";
	cout << fixed; cout.precision(5);
	for(int i = 0; i < n + 1; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0) { //вывод порядка столбцов
				SetColor(Black, Yellow);
				cout << setw(10) << j + 1;
				SetColor(Black, White);
				continue;
			}
			if(i > 0 and j == 0) { //вывод порядка строк
				SetColor(Black, Yellow);
				cout << setw(3) << i;
				SetColor(Black, White);
			}
			if(i > 0) cout << setw(10) << X[i - 1][j]; //вывод белым остальные числа
		}
		cout << "\n\n";
	}
}
void GetY(vector<float>Y) {
	cout << "\n\nY:\n";
	SetColor(Black, Yellow);
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << i;
	}
	SetColor(Black, White);
	cout << "\n\n";
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << Y[i];
	}
}
void GetX(vector<float>Y) {
	cout << "\n\nX:\n";
	SetColor(Black, Yellow);
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << i;
	}
	SetColor(Black, White);
	cout << "\n\n";
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << Y[i];
	}
	cout << "\n\n";
}


int main() {
	setlocale(LC_ALL, "Rus");
	double sumii, sumij, sumXY;
	short n;
	cout << "Размер матрицы = "; cin >> n;
	// Все величины разделены по отдельности для удобства
	vector<vector<double>> A(n, vector<double>(n));
	vector<vector<double>> g(n, vector<double>(n));
	vector<float>b(n);
	vector<float>Y;
	vector<float>X(n);
	// Задаем матрицу
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
		cin >> b[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			// Главная диагональ
			if(i == j) {
				sumii = A[i][i];
				for(int k = 0; k < i; k++) {
					sumii -= pow(g[k][i], 2);
				}
				g[i][i] = sqrt(sumii);
			}
			// Справа от главной диагонали
			else if(i < j) {
				sumij = A[i][j];
				for(int k = 0; k < i; k++) {
					sumij -= g[k][i] * g[k][j];
				}
				g[i][j] = (sumij / g[i][i]);
			}
			// Ниже главной диагонали все нули
			else g[i][j] = 0;
		}
	}
	// Найдем Y
	for(int i = 0; i < n; i++) {
		sumXY = b[i];
		for(int k = 0; k < i; k++) {
			sumXY -= g[k][i] * Y[k];
		}
		Y.push_back(sumXY / g[i][i]);
	}
	// Найдем X
	for(int i = n - 1; i > -1; i--) {
		sumXY = Y[i];
		for(int k = n - 1; k > i; k--) {
			sumXY -= g[i][k] * X[k];
		}
		X[i] = (sumXY / g[i][i]);
	}
	GetMatrixA(n, A, b);
	GetMatrixG(n, g);
	GetY(Y);
	GetX(X);
	return 0;
}