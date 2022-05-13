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
	int n = 4;
	vector<vector<double>> A(n, vector<double>(n + 1));
	vector<double>alpha(n);
	vector<double>beta(n);
	vector<double>a(n + 1);
	vector<double>b(n + 1);
	vector<double>c(n + 1);
	vector<double>d(n + 1);
	a = {
		-0.138715612,
		0.120785918,
		0.307020331,
		0.307020331,
		0.120785918,
		-0.138715612
	};
	A = {
		{4. , 1. , 0.0, 0.0,	0},
		{1. , 4. , 1. , 0.0,	0},
		{0.0, 1. , 4. , 1. ,	0},
		{0.0, 0.0, 1. , 4. ,	0}
	};
	for(int i = 0; i < n; i++) { // Отдельно задается чему равняется каждое уравнение
		A[i][4] = 6 * (a[i] - a[i + 2]) / 0.16;
	}
	double e;
	for(int i = 0; i < n; i++) {
		if(i == 0) { // формулы альфы и беты для первого значения
			alpha[i] = -A[i][i + 1] / A[i][i];
			beta[i] = A[i][4] / A[i][i];
		}
		else if(i == n) { // отдельно выведено на последнее значение, чтобы альфа не вышла за массив
			e = A[i][i] + A[i][i - 1] * alpha[i - 1];
			beta[i] = (A[i][4] - A[i][i - 1] * beta[i - 1]) / e;
		}
		else { // в остальном промежутке так
			e = A[i][i] + A[i][i - 1] * alpha[i - 1];
			alpha[i] = -A[i][i + 1] / e;
			beta[i] = (A[i][4] - A[i][i - 1] * beta[i - 1]) / e;
		}
	}
	for(int i = n - 1; i >= 0; i--) { // обратный ход, ищем С
		if(i == n - 1) c[i] = beta[i];
		else c[i] = beta[i] + alpha[i] * c[i + 1];
	}


	for(int i = 0; i < n + 1; i++) { // находим d
		if(i == 0) d[i] = c[i] / 0.4;
		else d[i] = (c[i] - c[i - 1]) / 0.4;
	}


	for(int i = 0; i < n + 1; i++) { // находим b
		if(i == 0) b[i] = (0.4 * c[i] / 3) - (a[i] - a[i + 1]) / 0.4;
		else b[i] = (0.4 * c[i] / 3) + (0.4 * c[i - 1] / 6) - (a[i] - a[i + 1]) / 0.4;
	}
	cout << "A\n";
	GetX(a);
	cout << "B\n" << "Неизвестные:\n";
	GetX(b);
	cout << "C\n" << "Неизвестные:\n";
	GetX(c);
	cout << "D\n" << "Неизвестные:\n";
	GetX(d);
	return 0;
}