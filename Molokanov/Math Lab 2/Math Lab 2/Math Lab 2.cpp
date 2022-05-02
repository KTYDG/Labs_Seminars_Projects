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

int main() {
	setlocale(LC_ALL, "Rus");


	return 0;
}