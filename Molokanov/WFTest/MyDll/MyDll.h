// Приведенный ниже блок ifdef — это стандартный метод создания макросов, упрощающий процедуру
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа MYDLL_EXPORTS
// Символ, определенный в командной строке. Этот символ не должен быть определен в каком-либо проекте,
// использующем данную DLL. Благодаря этому любой другой проект, исходные файлы которого включают данный файл, видит
// функции MYDLL_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif





#include <objbase.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Этот класс экспортирован из библиотеки DLL
class MYDLL_API CMyDll {
public:
	string *ch;
	CMyDll(string test);
	~CMyDll();
	string Get();
};

extern "C" MYDLL_API CMyDll * CreateCMyDll(char* test);
extern "C" MYDLL_API void DestroyCMyDll(CMyDll * cmydll);
extern "C" MYDLL_API void Getchar(CMyDll * cmydll, char*& ReturnedValue);

//void * __stdcall createCMyDll(char* test) {
//	return new CMyDll(test);
//}
//void * __stdcall destroyCMyDll(void *obj) {
//	CMyDll *cmydll = (CMyDll*)obj;
//	if(cmydll) delete cmydll;
//}
//
//char __stdcall Getchar(void *obj) {
//	CMyDll *cmydll = (CMyDll*)obj;
//	return cmydll->Get();
//}
//
//extern MYDLL_API void* createCMyDll(char* test);
//extern MYDLL_API void* destroyCMyDll(void *obj);
//extern MYDLL_API char Getchar(void *obj);















extern MYDLL_API int nMyDll;

MYDLL_API int fnMyDll(void);

extern "C" MYDLL_API int SaveText(char** buffer);

extern "C" MYDLL_API int LoadText(char** buffer);

extern "C" MYDLL_API int GetArrays(wchar_t**& ppNames, int * size);

extern "C" MYDLL_API int GetIntArrays(int**& data, int* size);

extern "C" MYDLL_API int GetDoubleArrays(double**& data, int* size);

