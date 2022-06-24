#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
void div(int a, int b);

int main() {
	float a, b;
	if(scanf_s("%f %f", &a, &b) != 2 || (a - (int)a) > 0 || (b - (int)b) > 0 || -a + (int)a > 0 || -b + (int)b > 0) {
		printf("n/a n/a n/a n/a");
	}
	else {
		printf("%d %d %d ", sum(a, b), dif(a, b), mul(a, b));
		div(a, b);
	}
	return 0;
}

int sum(int a, int b) {
	return a + b;
}
int dif(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
void div(int a, int b) {
	if(b == 0) {
		printf("n/a");
	}
	else printf("%d", a / b);
}
