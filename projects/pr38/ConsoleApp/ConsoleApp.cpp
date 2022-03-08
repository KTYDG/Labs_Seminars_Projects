#include <iostream>
#include <string>
#include <map>
#include <locale>
#include <conio.h>
using namespace std;
#include "../pr38/DB.h"


int main() {
	locale::global(locale("ru_RU.UTF-8"));
	char button = '1';

	DB db1;
	wcout << L"Клаваши от 1 до 5 и 7 сортируют по соотвествующим столбцам\nПовторное нажатие сортирует в обратную сторону\n";
	while(button != 27) {
		button = _getch();
		if(button == '7' or (button >= '0' && button <= '5')) {
			db1.sort(button);
		}
	}
	return 0;
}
