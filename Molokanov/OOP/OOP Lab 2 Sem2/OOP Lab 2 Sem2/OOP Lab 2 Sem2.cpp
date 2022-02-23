#include "pch.h"
#include "Library.h"

struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

int main() {
    locale::global(locale("ru_RU.UTF-8"));

    Library Lib_362(362);
    Library Lib_112(112);
    cout << "Library 112:\n";
    Lib_112.ShowBase();
    cout << "Library 362 before:\n";
    Lib_362.ShowBase();

    //vector<Type*>v;

    // Нужна сортировка для работы set_union
    //sort(Lib_362.storage.begin(), Lib_362.storage.end(), compare);
    //sort(Lib_112.storage.begin(), Lib_112.storage.end(), compare);

    // Находятся элементы уникальные для библиотеки 362 и заносятся в вектор V
    // Адреса элементов у вектора V и библы 112 одинаковые
    //set_difference(Lib_112.storage.begin(), Lib_112.storage.end(),
    //          Lib_362.storage.begin(), Lib_362.storage.end(),
    //          back_inserter(v), compare);

    //copy(v.begin(), v.end(), back_inserter(Lib_362.storage)); 

    Lib_362 = Lib_112;
    cout << "Library 362 after:\n";
    Lib_362.ShowBase();
    return 0;
}