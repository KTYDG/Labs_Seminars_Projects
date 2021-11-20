#include <iostream>
#include <vector>
#include <locale>
#include <codecvt>
#include <fstream>
#include <map>
#include <set>
using namespace std;

struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

class Goods {
public:
    int* amount;
    wstring* name;
    virtual int GetAmount() = 0;
    virtual wstring GetName() = 0;
    virtual ~Goods() = default;
};

class TShirt: public Goods {
public:
    TShirt(int a, wstring n) { 
        amount = new int(a); 
        name = new wstring(n);
    }
    virtual int GetAmount() { return *amount; }
    virtual wstring GetName() { return *name; }
    virtual ~TShirt() {
        delete amount;
        delete name;
    }
};
class Cap: public Goods {
public:
    Cap(int a, wstring n) {
        amount = new int(a);
        name = new wstring(n);
    }
    virtual int GetAmount() { return *amount; }
    virtual wstring GetName() { return *name; }
    virtual ~Cap() {
        delete amount;
        delete name;
    }
};
class Ball: public Goods {
public:
    Ball(int a, wstring n) {
        amount = new int(a);
        name = new wstring(n);
    }
    virtual int GetAmount() { return *amount; }
    virtual wstring GetName() { return *name; }
    virtual ~Ball() {
        delete amount;
        delete name;
    }
};
class Backpack: public Goods {
public:
    Backpack(int a, wstring n) {
        amount = new int(a);
        name = new wstring(n);
    }
    virtual int GetAmount() { return *amount; }
    virtual wstring GetName() { return *name; }
    virtual ~Backpack() {
        delete amount;
        delete name;
    }
};
class Boots: public Goods {
public:
   Boots(int a, wstring n) {
       amount = new int(a);
       name = new wstring(n);
   }
   virtual int GetAmount() { return *amount; }
   virtual wstring GetName() { return *name; }
   virtual ~Boots() {
       delete amount;
       delete name;
   }
};
class Byke: public Goods {
public:
    Byke(int a, wstring n) {
        amount = new int(a);
        name = new wstring(n);
    }
    int GetAmount() { return *amount; }
    wstring GetName() { return *name; }
    ~Byke() {
        delete amount;
        delete name;
    }
};

vector<Goods*>v;

void bigIF(wstring type, int amount) {
    if(type == L"футболка") { v.push_back(new TShirt(amount, type)); return; }
    if(type == L"бейсболка") { v.push_back(new Cap(amount, type)); return; }
    if(type == L"мяч") { v.push_back(new Ball(amount, type)); return; }
    if(type == L"рюкзак") { v.push_back(new Backpack(amount, type)); return; }
    if(type == L"кеды") { v.push_back(new Boots(amount, type)); return; }
    if(type == L"велосипед") { v.push_back(new Byke(amount, type)); return; }
}

int main() {
    locale::global(locale("ru_RU.UTF-8"));
    const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

    multimap<set<int>, wstring>list;
    wstring type;
    int amount;
    // Чтение файла и заполение вектора
    wifstream input;
    input.open(L"Товары.txt");
    input.imbue(utf8_locale);
    if(!input) { wcout << L"Can't open file \"Товары.txt\""; return 0; }
    else {
        while(!input.eof()) {
            input >> type;
            input >> amount;
            bigIF(type, amount);
        }
    }
    input.close();
    // Заполнение multimap
    for(int i = 0; i < v.size(); i++) {
        set<int>inside; // Создание контейнера set
        inside.insert(v[i]->GetAmount()); // Положили в set количество товара
        list.emplace(inside, v[i]->GetName()); // Создаем элемент контейнера multimap
    }
    for(multimap<set<int>, wstring>::iterator i = list.begin(); i != list.end(); ++i) {
        wcout << i->second << ": ";
        auto num = (i->first);
        for(auto& n : num) {
            cout << n << endl;
        }
    }


    for(int i = 0; i < v.size(); i++) {
        delete v[i];
    }
    return 0;
}
