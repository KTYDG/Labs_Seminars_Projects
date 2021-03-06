#include <iostream>
#include <iomanip>
#include <vector>
#include <windows.h>
using namespace std;
enum ConsoleColor { // Цвета
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
void PrintMatrix(vector<vector<double>> A, int n) { // Вывод всей матрицы
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
			if(i > 0 && j == 0) { //вывод порядка строк
				SetColor(Black, Yellow);
				cout << setw(3) << i;
				SetColor(Black, White);
			}
			if(i > 0) cout << setw(10) << A[i - 1][j]; //вывод белым остальные числа
			if(j == n - 1) cout << " | " << left << setw(10) << A[i - 1][j + 1] << right;
		}
		cout << "\n\n";
	}
}

void GetX(vector<double>Y) { // Для вывода коэффициентов
	cout << "\n\nНеизвестные:\n";
	SetColor(Black, Yellow);
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << i + 1;
	}
	SetColor(Black, White);
	cout << "\n\n";
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << Y[i];
	}
	cout << "\n\n";
}

void ErrorLine(vector<double>X, vector<double>Y, vector<double>B, int n) {
	double error = 0;
	for(int i = 0; i < X.size(); i++) {
		if(B.size() == 2) error += pow(Y[i] - (B[0] * X[i] + B[1]), 2);
		else if(B.size() == 3) error += pow(Y[i] - (B[0] * pow(X[i], 2) + B[1] * X[i] + B[2]), 2);

	}
	cout << "Погрешность = " << error / X.size() << "\n\n";
}
int main() {
	setlocale(LC_ALL, "Rus");
	vector<double>X = /*{1.577,
						1.538,
						1.333,
						1.847,
						1.797,
						1.910,
						1.371,
						1.527,
						1.632,
						1.034
	};*/
	{/*8.21,
		8.26,
		2.51,
		2.56,
		3.38,
		3.88,
		5.27,
		2.66,
		4.01,
		8.71*/
		0, 0.45, 0.9, 1.35, 1.8, 2.25, 2.7, 3.15, 3.6, 4.05, 4.5, 4.95, 5.4, 5.85, 6.3, 6.75, 7.2, 7.65, 8.1, 8.55, 9, 9.45, 9.9, 10.35, 10.8
	};

	vector<double>Y = /*{2.518,
						2.390,
						2.566,
						1.789,
						2.069,
						1.776,
						2.633,
						2.136,
						2.302,
						3.327
	};*/
	{/*15.21,
		14.07,
		4.47,
		3.83,
		4.19,
		7.16,
		8.42,
		3.10,
		8.45,
		17.80*/
		-450, -448.823, -446.587, -443.292, -438.937, -433.523, -427.05, -419.518, -410.927, -401.276, -390.566, -378.797, -365.969, -352.082, -337.135, -321.129, -304.064, -285.94, -266.756, -246.514, -225.212, -202.851, -179.43, -154.951, -129.412
	};

	int n = 3;
	bool b;
	vector<vector<double>> A(n, vector<double>(n + 1));
	for(int i = 0; i < n; i++) { // Заполнение матрицы с помощью метода наименьших квадратов
		b = true;
		for(int j = 0; j < n; j++) {
			for(int it = 0; it < X.size(); it++) {
				A[i][j] += pow(X[it], n - 1 - j + i);
				if(b) A[i][n] += Y[it] * pow(X[it], i);
			}
			b = false;
		}
	}
	PrintMatrix(A, n);
	// Прямой ход Гаусса
	double diag, line;
	for(int i = 0; i < n; i++) {
		diag = A[i][i];
		for(int j = 0; j < n + 1; j++) { // Приводим число на диагонали к единице
			A[i][j] /= diag;
		}
		cout << i + 1 << ")\n"; PrintMatrix(A, n); // Показываем главаная диагональ пришла к 1
		for(int it = i + 1; it < n; it++) { // Вычитаем из строк
			line = A[it][i]; // Запоминаем число строки под главной диагональю
			for(int j = 0; j < n + 1; j++) {
				A[it][j] -= line * A[i][j];
			}
		}
		cout << "\n"; PrintMatrix(A, n); // Показываем как занулили строки под текущим столбцом
	}
	// Обратный ход Гаусса
	vector<double>B(n);
	for(int i = n - 1; i >= 0; i--) {
		for(int j = n - 1; j >= 0; j--) {
			A[i][n] -= B[j] * A[i][j];
		}
		B[i] = (A[i][n]);
	}
	GetX(B); // Вывод коэффициентов
	// Оценка погрешности метода наименьших квадратов
	ErrorLine(X, Y, B, n);
	return 0;
}