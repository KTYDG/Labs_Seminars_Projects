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
			if(i > 0 and j == 0) { //вывод порядка строк
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



int main() {
	setlocale(LC_ALL, "Rus");
	int n = 3; // РАЗМЕРНОСТЬ МАТРИЦЫ
	bool b;
	vector<vector<double>> A(n, vector<double>(n + 1));
	A = {
		{2, -1, 0, 3},
		{5, 4, 2, 6},
		{0, 1, -3, 2}
	};

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
	return 0;
}