#include <iostream>
#include <iomanip>
#include <vector>
#include <windows.h>
#include <cmath>
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
	cout << fixed << right; cout.precision(5);
	for(int i = 0; i < n + 1; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0) { //вывод порядка столбцов
				SetColor(Black, Yellow);
				cout << setw(14) << j + 1;
				if(j == n - 1) cout << setw(12) << "b";
				SetColor(Black, White);
				continue;
			}
			if(i > 0 && j == 0) { //вывод порядка строк
				SetColor(Black, Yellow);
				cout << setw(3) << i;
				SetColor(Black, White);
			}
			if(i > 0) cout << setw(14) << A[i - 1][j]; //вывод белым остальные числа
			if(j == n - 1) cout << " | " << left << setw(14) << A[i - 1][j + 1] << right;
		}
		cout << "\n\n";
	}
}
void GetX(vector<double>Y) { // Для вывода коэффициентов
	cout << "Неизвестные:\n";
	SetColor(Black, Yellow);
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << i + 1;
	}
	SetColor(Black, White);
	cout << "\n";
	for(int i = 0; i < Y.size(); i++) {
		cout << setw(10) << Y[i];
	}
	cout << "\n";
}
void ErrorLine(vector<double>X, vector<double>Y, vector<double>B, int n) {
	double error = 0;
	for(int i = 0; i < X.size(); i++) {
		if(B.size() == 2) error += pow(Y[i] - (B[0] * X[i] + B[1]), 2);
		else if(B.size() == 3) error += pow(Y[i] - (B[0] * pow(X[i], 2) + B[1] * X[i] + B[2]), 2);

	}
	cout << "Среднее квадратичное отклонение: " << error / X.size() << "\n";
}
void CreateMatrix(vector<vector<double>> &A, vector<double>X, vector<double>Y, int n) {
	bool b;
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
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int amount = 25;
const double S = 380., V = 62700., H = -450.,
p0 = 1000., p1 = 652., Vs = 46.,
alpha = 0.001, n = 0.001, l = 170.,
g = 9.8;

void Runge(vector<double>h) {
	int count = 0;
	double sum = 0, sum2 = 0;
	for(int i = 0; i < amount; i++) {
		if(i % 2 == 0) {
			sum2 += h[i];
			count++;
		}
		else sum += h[i];
	}
	sum /= (amount - count + 1);
	sum2 /= count;
	cout << "Погрешность по правилу Рунге: " << abs(sum - sum2) / (pow(2, 4) - 1) << "\n";
}

double F(double z) { // тут нет нужды наличие в формуле t и h
	return z;
}
double G(/*double t,*/ double h, double z) { // тут нет нужды наличие в формуле t
	return g * (p0 / p1 - 1) - (S / l) * n * (1 + alpha * (h / H)) * z / (p1 * V);
}

int main() {
	setlocale(LC_ALL, "Rus");
	float q = abs(H) * alpha;
	vector<double>h(amount);
	h[0] = H;
	vector<double>z(amount);
	vector<double>t(amount);
	vector<double>k(4);
	vector<double>m(4);
	// Рунге – Кутта 4 порядка
	for(int i = 1; i < amount; i++) {
		t[i] = t[i - 1] + q;

		m[0] = G(h[i - 1], z[i - 1]);
		k[0] = F(z[i - 1]);

		m[1] = G(h[i - 1] + (k[0] / 2), z[i - 1] + (m[0] / 2));
		k[1] = F(z[i - 1] + m[0] / 2);

		m[2] = G(h[i - 1] + k[1] / 2, z[i - 1] + m[1] / 2);
		k[2] = F(z[i - 1] + m[1] / 2);

		m[3] = G(h[i - 1] + k[2], z[i - 1] + m[2]);
		k[3] = F(z[i - 1] + m[2]);

		h[i] = h[i - 1] + (q / 6) * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);
		z[i] = z[i - 1] + (q / 6) * (m[0] + 2 * m[1] + 2 * m[2] + m[3]);
	}
	// Вывод 25 точек
	cout << fixed; cout.precision(5);
	cout << "\tt\t\th\n";
	for(int i = 0; i < amount; i++) {
		cout << "[" << i + 1 << "]\t" << left << setw(10) << t[i] << setw(10) << h[i] << "\n";
	}
	Runge(h); // ОЦЕНКА ПОГРЕШНОСТИ
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int n = 3;
	vector<vector<double>> A(n, vector<double>(n + 1));
	CreateMatrix(A, t, h, n); // Создание матрицы с помощью МНК

	//Прямой ход Гаусса
	double diag, line, max;
	for(int i = 0; i < n; i++) {
		diag = A[i][i];
		max = i;
		for(int d = i + 1; d < n; d++) {
			if(abs(diag) <= abs(A[d][i])) { diag = A[d][i]; max = d; }
		}
		swap(A[i], A[max]);
		for(int j = 0; j < n + 1; j++) { // Приводим число на диагонали к единице
			A[i][j] /= diag;
		}
		cout << i + 1 << ") К ЕДИНИЦE\n"; PrintMatrix(A, n); // Показываем главаная диагональ пришла к 1
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
	ErrorLine(t, h, B, n); // Отклонение функции
	cout << "Квадратичная аппроксимация: y = " << B[0] << "*t^2 + " << B[1] << "*t + " << B[2] << "\n";

	// Решение кв уравнения
	vector<double>T(2);
	B[2] -= H;
	double Di = sqrt(pow(B[1], 2) - 4 * B[0] * B[2]);
	if(Di < 0) cout << "Нет вещественных корней\n";
	else {
		T[0] = (-B[1] - Di) / (2 * B[0]);
		T[1] = (-B[1] + Di) / (2 * B[0]);
		cout << "Время всплытия: T[1] = " << T[0] << "; T[2] = " << T[1];
	}
	cout << "\n\n\n";
	return 0;
}
