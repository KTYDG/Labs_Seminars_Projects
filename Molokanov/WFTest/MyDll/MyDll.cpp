// MyDll.cpp : Определяет экспортируемые функции для DLL.
//

#include "framework.h"
#include "MyDll.h"

// Пример экспортированной переменной
MYDLL_API int nMyDll = 0;

// Пример экспортированной функции.
MYDLL_API int fnMyDll(void) {
	return 0;
}







// Конструктор для экспортированного класса.
CMyDll::CMyDll(string test) {
	ch = new string(test);
}
CMyDll::~CMyDll() {
	delete ch;
}
string CMyDll::Get() {
	return *ch;
}

CMyDll* CreateCMyDll(char* test) {
	return new CMyDll(test);
}
void DestroyCMyDll(CMyDll* cmydll) {
	if(cmydll) {
		delete cmydll;
		cmydll = NULL;
	}

}
void Getchar(CMyDll* cmydll, char*& ReturnedValue) {
	if(cmydll) {
		const char* t = new char(*"Testing");
		strncpy(ReturnedValue, "Testing", 8);
	}
}













MYDLL_API int SaveText(char** buffer) {
	ofstream o("test.txt");
	if(!o.is_open())
		return 0;
	o << *buffer;
	return 1;
}

MYDLL_API int LoadText(char** buffer) {
	ifstream i("test.txt");
	if(!i.is_open())
		return 0;
	/* std::istreambuf_iterator<char>(
		*(std::unique_ptr<std::ifstream>(new std::ifstream("log.txt"))).get())),
		std::istreambuf_iterator<char>()); */

	string s(
		(std::istreambuf_iterator<char>(i)), // от начала
		std::istreambuf_iterator<char>()  // до конца файла
	);
	*buffer = (char*)CoTaskMemAlloc(s.length());
	strcpy(*buffer, s.c_str());

}

int GetArrays(wchar_t**& ppNames, int* size) {
	vector <wstring> vs = {L"Один",L"Два",L"Три"};

	int newStringsArraySize = 0;
	{
		for(int i = 0; i < *size; i++) CoTaskMemFree((ppNames)[i]);
		CoTaskMemFree(ppNames);
		ppNames = NULL;
		newStringsArraySize = vs.size();
		int newwidth = 0;
		wchar_t** newArray = (wchar_t**)CoTaskMemAlloc(sizeof(wchar_t*) * newStringsArraySize);
		for(int j = 0; j < newStringsArraySize; j++) {
			wstring  str1(vs[j].begin(), vs[j].end());
			newwidth = str1.size() + 1;
			newArray[j] = (wchar_t*)CoTaskMemAlloc(sizeof(wchar_t) * newwidth);
			::ZeroMemory(newArray[j], sizeof(wchar_t) * newwidth);
			swprintf(newArray[j], newwidth, str1.data());
		}
		ppNames = newArray;
	}

	*size = vs.size();  // для   EXE сообщаем ему размер массивов
	return 1;
}


int GetIntArrays(int**& data, int* size) {
	typedef int  type;
	vector < type > v = {1,2,3};
	vector <double> vd = {3.14,2.71, 6.02e23};

	int newArraySize = 0;
	for(int i = 0; i < *size; i++) CoTaskMemFree((data)[i]);
	CoTaskMemFree(data);
	data = NULL;
	newArraySize = v.size();

	type** newArray = (type**)CoTaskMemAlloc(sizeof(type*) * newArraySize);
	for(int j = 0; j < newArraySize; j++) {
		newArray[j] = (type*)CoTaskMemAlloc(sizeof(type));
		::ZeroMemory(newArray[j], sizeof(type));
		*newArray[j] = v[j];
	}
	data = newArray;

	*size = v.size();  // для   EXE сообщаем ему размер массивов
	string ss = to_string(*newArray[1]);
	//  MessageBoxA(0, ss.c_str(), "", 0);
	return *size;
}

int GetDoubleArrays(double**& data, int* size) {
	typedef double  type;
	vector <double> v = {3.14,2.71, 6.02e23};

	int newArraySize = 0;
	{
		for(int i = 0; i < *size; i++) CoTaskMemFree((data)[i]);
		CoTaskMemFree(data);
		data = NULL;
		newArraySize = v.size();

		type** newArray = (type**)CoTaskMemAlloc(sizeof(type*) * newArraySize);
		for(int j = 0; j < newArraySize; j++) {
			newArray[j] = (type*)CoTaskMemAlloc(sizeof(type));
			::ZeroMemory(newArray[j], sizeof(type));
			*newArray[j] = v[j];
		}
		data = newArray;
	}

	*size = v.size();  // для   EXE сообщаем ему размер массивов
	return 1;
}

