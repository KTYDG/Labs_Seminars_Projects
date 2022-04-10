#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int count = 1;
	double x0 = 1, y0 = 2.2, z0 = 2, x, y, z, d1, d2, d3, eps = 0.01;
	do {
		// Ваши функции
		x = log10(y0 / z0) + 1;
		y = pow(z0, 2) - 2 * pow(x0, 2) + 0.4;
		z = x0 * y0 / 20 + 2;
		//Вывод промежуточных значений
		cout << "[" << count++ << "]\t" << x << "\t\t" << y << "\t\t" << z << endl;
		//Подсчёт f(x) - x
		d1 = abs(log10(y / z) - x + 1);
		d2 = abs(pow(z, 2) - 2 * pow(x, 2) - y + 0.4);
		d3 = abs(x * y / 20 + 2 - z);
		//Ну, тут понятно
		x0 = x;
		y0 = y;
		z0 = z;
		//Пока f(x) - x больше точности, повторяем
	} while(d1 > eps || d2 > eps || d3 > eps);

	//Вывод разности
	cout << "\nd1 = " << d1 << "\t" << "d2 = " << d2 << "\t" << "d3 = " << d3;
	// Докручиваем последнюю итерацию
	x = log10(y0 / z0) + 1;
	y = pow(z0, 2) - 2 * pow(x0, 2) + 0, 4;
	z = x0 * y0 / 20 + 2;

	cout << "\n[" << count++ << "]\t" << "x = " << x << "\t" << "y = " << y << "\t" << "z = " << z << "\n";

	return 0;
}
