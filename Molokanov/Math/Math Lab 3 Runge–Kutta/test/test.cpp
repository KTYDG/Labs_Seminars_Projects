#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Leak {
	~Leak() { _CrtDumpMemoryLeaks(); }
}_l;

const long double S = 380.; //площадь подлодки
const long double V = 62700.; //объём
const long double H = 450.; //глубина
const long double ro1 = 652.; //средняя плотность
const long double d = 170.;
const long double v = 46.;

const long double ro0 = 1000.; //плотность воды 
const long double n_ = 0.001; //
const long double a = 0.001; // 
const long double g = 9.8; //g

long double *t = new long double[100002];
long double *z = new long double[100002];
long double *h = new long double[100002];
int j = 0;
int n = 3;
long double *yi = new long double[n];
long double *xi = new long double[n];

long double dhdt(long double z) {
	return z;
};
long double k_ = S / d;
long double dzdt(long double t, long double h, long double z) {
	return (-n_ * k_ * (1 + a * h / H) * z) / (V * ro1) + g * (ro0 / ro1 - 1);
}

void RungeKutta() {
	long double *k = new long double[4];
	long double *m = new long double[4];
	long double q = 0.001 * abs(H), sum = 0, sum2 = 0;
	int i;
	t[0] = 0;
	z[0] = v;
	h[0] = -H;
	for(i = 0; h[i] < 0; i++) {
		m[0] = dzdt(t[i], h[i], z[i]);
		k[0] = dhdt(z[i]);
		m[1] = dzdt(t[i] + q / 2, h[i] + k[0] * q / 2, z[i] + m[0] * q / 2);
		k[1] = dhdt(z[i] + m[0] * q / 2);
		m[2] = dzdt(t[i] + q / 2, h[i] + k[1] * q / 2, z[i] + m[1] * q / 2);
		k[2] = dhdt(z[i] + m[1] * q / 2);
		m[3] = dzdt(t[i] + q, h[i] + k[2] * q, z[i] + m[2] * q);
		k[3] = dhdt(z[i] + m[2] * q);
		z[i + 1] = z[i] + q * (m[0] + 2 * m[1] + 2 * m[2] + m[3]) / 6;
		h[i + 1] = h[i] + q * (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
		t[i + 1] = t[i] + q;
		cout << "ШАГ = " << i << "\n";
		cout << "t[" << i << "] = " << t[i] << "\n";
		//cout << "m[0] = " << m[0] << "\r\n";
		//cout << "k[0] = " << k[0] << "\r\n";
		//cout << "m[1] = " << m[1] << "\r\n";
		//cout << "k[1] = " << k[1] << "\r\n";
		//cout << "m[2] = " << m[2] << "\r\n";
		//cout << "k[2] = " << k[2] << "\r\n";
		//cout << "m[3] = " << m[3] << "\r\n";
		//cout << "k[3] = " << k[3] << "\r\n";
		cout << "z[" << i << "] = " << z[i] << "\r\n";
		cout << "h[" << i << "] = " << h[i] << "\r\n\r\n";
	}

	j = i;
	int count = 0;
	for(i = 0; i < j; i++) {
		if(i % 2 == 0) {
			sum2 += h[i];
			count++;
		}
		else
			sum += h[i];
	}
	sum /= (j - count);
	sum2 /= count;
	/// <summary>


	/// </summary>
	cout << "Сумма h[i],h = " << sum2 << "\r\n";
	cout << "Сумма h[i],h/2 = " << sum << "\r\n";
	cout << "Погрешность по правилу Рунге - Кутта = | h[i],h - h[i], h/2 | / 15 = " << abs(sum - sum2) / 15.0 << "\n";

	delete[]k;
	delete[]m;
}

void Aproximat() {
	long double *xpow2 = new long double[j];
	long double *xpow3 = new long double[j];
	long double *xpow4 = new long double[j];
	long double *xy = new long double[j];
	long double *xpow2y = new long double[j];
	long double delta = 0;
	long double sx = 0, sy = 0, sxpow2 = 0, sxpow3 = 0, sxpow4 = 0, sxy = 0, sxpow2y = 0;
	for(int i = 0; i < j; i++) {
		xpow2[i] = pow(z[i], 2);
		xpow3[i] = pow(z[i], 3);
		xpow4[i] = pow(z[i], 4);
		xy[i] = z[i] * h[i];
		xpow2y[i] = xpow2[i] * h[i];
		sx += z[i];
		sy += h[i];
		sxpow2 += xpow2[i];
		sxpow3 += xpow3[i];
		sxpow4 += xpow4[i];
		sxy += xy[i];
		sxpow2y += xpow2y[i];
	}
	long double matrix[3][3];
	matrix[0][0] = sxpow4;
	matrix[0][1] = sxpow3;
	matrix[0][2] = sxpow2;
	matrix[1][0] = sxpow3;
	matrix[1][1] = sxpow2;
	matrix[1][2] = sx;
	matrix[2][0] = sxpow2;
	matrix[2][1] = sx;
	matrix[2][2] = j;
	yi[0] = sxpow2y;
	yi[1] = sxy;
	yi[2] = sy;
	int k = 0;
	long double tmp = 0;
	while(k < n) {
		tmp = matrix[k][0];
		if(tmp == 0) {
			k++;
		}
		else break;
	}
	if(tmp == 0) {
		cout << "Решение получить невозможно из - за нулевого столбца!\n";
	}
	while(k < n) {
		for(int i = k; i < n; i++) {
			tmp = matrix[i][k];
			if(tmp == 0) continue;
			for(int j = 0; j < n; j++) {
				matrix[i][j] /= tmp;
			}
			yi[i] /= tmp;
			if(i == k) continue;
			for(int j = 0; j < n; j++) {
				matrix[i][j] = matrix[i][j] - matrix[k][j];
			}
			yi[i] = yi[i] - yi[k];
		}
		k++;
	}

	for(k = n - 1; k >= 0; k--) {
		xi[k] = yi[k];
		for(int i = 0; i < k; i++)
			yi[i] = yi[i] - matrix[i][k] * xi[k];
	}
	cout << "\rАппроксимирующая функция\r\n";
	cout << "y = " << round(xi[0] * 1000) / 1000.0 << "*t^2 + " << round(xi[1] * 1000) / 1000.0 << "*t + " << round(xi[2] * 1000) / 1000.0 << "\r\n";
	for(int i = 0; i < j; i++)
		delta += pow((h[i] - (xi[0] * pow(z[i], 2) + xi[1] * z[i] + xi[2])), 2);
	delta /= j;
	cout << "\rСреднее квадратичное отклонение для квадратичной функции = " << delta << "\r\n";

	delete[] xpow2;
	delete[] xpow3;
	delete[] xpow4;
	delete[] xy;
	delete[] xpow2y;
}




void Grafik() {
	long double a = xi[0];
	long double b = xi[1];
	long double c = xi[2];
	long double D, t1 = 0, t2 = 0;
	cout << "\rПоиск времени всплытия из уравнения аппроксимирующей функции\r\n";
	cout << "Заменим y в уравнении y = " << round(xi[0] * 1000) / 1000.0 << "*t^2 + " << round(xi[1] * 1000) / 1000.0 << "*t + " << round(xi[2] * 1000) / 1000.0 << " на Н(глубину) \r\n";
	cout << "Получим уравнение " << -H << " = " << round(xi[0] * 1000) / 1000.0 << "*t^2 + " << round(xi[1] * 1000) / 1000.0 << "*t + " << round(xi[2] * 1000) / 1000.0 << " \r\n";
	cout << "Преобразовав уравнение, получим " << round(xi[0] * 1000) / 1000.0 << "*t^2 + " << round(xi[1] * 1000) / 1000.0 << "*t + " << round(xi[2] * 1000) / 1000.0 + H << " = 0 \r\n";
	D = pow(xi[1], 2) - 4 * xi[0] * (xi[2] - H);
	if(D < 0)
		cout << "Решение получить невозможно из - за отрицательного дискриминанта!\n";
	else if(D == 0)
		t1 = -xi[1] / (2 * xi[0]);
	else {
		t1 = (-xi[1] + sqrt(D)) / (2 * xi[0]);
		t2 = (-xi[1] - sqrt(D)) / (2 * xi[0]);
	}
	if(t1 > 0 && t2 > 0) {
		cout << "Решив квадратное уравнение, получаем время всплытия подводной лодки T =" << t1 << " или T = " << t2 << "\r\n";
		cout << "Тогда точка всплытия подводной лодки L = " << t1 * v << " или L = " << t2 * v << "\r\n";
		cout << "\rОтвет:T = " << t1 << " и L = " << t1 * v << " или T = " << t2 << " и L = " << t2 * v << "\r\n";
	}
	else if(t1 > 0) {
		cout << "Решив квадратное уравнение, получаем время всплытия подводной лодки T = " << t1 << "\r\n";
		cout << "Тогда точка всплытия подводной лодки L = " << t1 * v << "\r\n";
		cout << "Ответ:T = " << t1 << " и L = " << t1 * v << "\r\n";
	}
	else if(t2 > 0) {
		cout << "Решив квадратное уравнение, получаем время всплытия подводной лодки T = " << t2 << "\r\n";
		cout << "Тогда точка всплытия подводной лодки L = " << t2 * v << "\r\n";
		cout << "Ответ:T = " << t2 << " и L = " << t2 * v << "\r\n";
	}
}

void Delete(); //определение ниже

int main() {
	setlocale(LC_ALL, "");
	RungeKutta(); cout << "\n";
	Aproximat(); cout << "\n";
	Grafik(); cout << "\n";

	Delete();
}

void Delete() {
	delete[] t;
	delete[] z;
	delete[] h;
	delete[] yi;
	delete[] xi;
}