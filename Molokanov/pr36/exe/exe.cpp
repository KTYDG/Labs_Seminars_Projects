#include "pch.h"
#include "..\pr36\DB.h"

int main() {
    locale::global(locale("ru_RU.UTF-8"));
    setlocale(LC_ALL, "Rus");
    DB db1;
    db1.Parser();
    db1.Out();
    DB db2(db1);
    db2.Out();
    DB db3;
    db3 = db1;
    db3.Out();
    return 0;
}
