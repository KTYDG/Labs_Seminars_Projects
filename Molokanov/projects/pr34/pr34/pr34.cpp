#include "Danila.h"
#include "DB.h"

struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

int main() {
    locale::global(locale("ru_RU.UTF-8"));

    DB<Molokanov*> db1;
    DB<Molokanov*> db2;
    srand(time(0));
    // Случайное заполение вектора
    for(int i = 0; i < 6; i++) {
        if(rand() % 2 == 0) {
            db1.Add(new Molokanov);
        }
        else {
           db1.Add(new Danila);
        }
    }
    db2 = db1;
    DB<Molokanov*> db3(db2);
    db3.EErase();
    wcout << db3;
    db3.Output(); // Заодно вывод в файл
    return 0;
}
