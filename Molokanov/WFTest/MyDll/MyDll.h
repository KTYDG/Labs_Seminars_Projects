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

// Этот класс экспортирован из библиотеки DLL
class MYDLL_API CMyDll {
public:
	CMyDll(void);
	// TODO: добавьте сюда свои методы.
};

extern MYDLL_API int nMyDll;

MYDLL_API int fnMyDll(void);

extern "C" MYDLL_API int SaveText(char** buffer);

extern "C" MYDLL_API int LoadText(char** buffer);

extern "C" MYDLL_API int GetArrays(wchar_t**& ppNames, int * size);

extern "C" MYDLL_API int GetIntArrays(int**& data, int* size);

extern "C" MYDLL_API int GetDoubleArrays(double**& data, int* size);

