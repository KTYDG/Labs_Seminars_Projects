#include "pch.h"
#include "MyVector.h"

MyVector::MyVector() {
	count = 0;
	arr = new int[count];
}
MyVector::~MyVector() {
	delete[] arr;
}

void MyVector::push_back(int a) {
	int* array1 = new int[count + 1]; // Создание копии массива
	// Копирование массива в копию
	/*memcpy(array1, arr, size * sizeof(int*));*/
	for(int j = 0; j < count; j++) {
		array1[j] = arr[j];
	}
	delete[] arr;		// Удаление оригинального массива
	array1[count] = a;  // Добавление в конец копии новый объект
	arr = array1;		// Присваиваем копию оригинальному массиву
	count++;
}
void MyVector::output() {
	for(int i = 0; i < count; i++) {
		cout << left << setw(4) << arr[i] << "	[" << i + 1 << "]" << endl;
	}
	cout << endl;
}
void MyVector::insert(int a, const int i) {
	if(count < i or i <= 0) return;
	int* array1 = new int[count + 1];
	bool flag = true;
	for(int j = 0; j < count + 1; j++) { // Копирование массива в копию
		if(j == i - 1) {				 // Вставка элемента по индексу
			array1[j] = a;
			flag = false;
			continue;
		}
		if(flag) { array1[j] = arr[j]; }
		else{ array1[j] = arr[j-1]; }
	}
	delete[] arr;		// Удаление оригинального массива
	arr = array1;		// Присваиваем копию оригинальному массиву
	count++;
}
void MyVector::erase(const int first, const int end) {
	if(end <= 0 or first <= 0 or end < first) return;
	int* array1 = new int[count - (end - first + 1)];
	bool flag = true;
	for(int j = 0; j < count; j++) {
		if(j <= end - 1 and j >= first - 1) {
			flag = false;
			continue;
		}
		if(flag) { array1[j] = arr[j]; }
		else { array1[j - (end - first + 1)] = arr[j]; }
	}
	delete[] arr;		// Удаление оригинального массива
	arr = array1;		// Присваиваем копию оригинальному массиву
	count = count - (end - first + 1);
}
int MyVector::operator[](const int i) {
	return arr[i];
}

