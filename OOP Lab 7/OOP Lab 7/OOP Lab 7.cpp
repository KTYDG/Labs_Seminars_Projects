#include <iostream>
#include <vector>
#include <locale>
#include <codecvt>
#include <fstream>
#include <map>
#include <set>
using namespace std;

class Goods {
public:
    int *amount;
    virtual int Get() = 0;
    virtual ~Goods() = default;
};

class TShirt: public Goods {
public:
    TShirt(int a) { amount = new int(a); }
    virtual int Get() { return *amount; }
    virtual ~TShirt() { delete amount; }
};
class Cap: public Goods {
public:
    Cap(int a) { amount = new int(a); }
    virtual int Get() { return *amount; }
    virtual ~Cap() { delete amount; }
};
class Ball: public Goods {
public:
    Ball(int a) { amount = new int(a); }
    virtual int Get() { return *amount; }
    virtual ~Ball() { delete amount; }
};
class Backpack: public Goods {
public:
    Backpack(int a) { amount = new int(a); }
    virtual int Get() { return *amount; }
    virtual ~Backpack() { delete amount; }
};
class Boots: public Goods {
public:
   Boots(int a) { amount = new int(a); }
   virtual int Get() { return *amount; }
    virtual ~Boots() { delete amount; }
};
class Byke: public Goods {
public:
    Byke(int a) { amount = new int(a); }
    int Get() { return *amount; }
    ~Byke() { delete amount; }
};

vector<Goods*>v;

void bigIF(wstring type, int amount) {
    if(type == L"футболка") { v.push_back(new TShirt(amount)); return; }
    if(type == L"бейсболка") { v.push_back(new Cap(amount)); return; }
    if(type == L"мяч") { v.push_back(new Ball(amount)); return; }
    if(type == L"рюкзак") { v.push_back(new Backpack(amount)); return; }
    if(type == L"кеды") { v.push_back(new Boots(amount)); return; }
    if(type == L"велосипед") { v.push_back(new Byke(amount)); return; }
}

int main() {
    locale::global(locale("ru_RU.UTF-8"));
    const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

    multimap<set<int>, Goods*>list;
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
        inside.insert(v[i]->Get()); // Положили в set количество товара
        list.emplace(inside, v[i]); // Создаем элемент контейнера multimap
    }
    return 0;
}
