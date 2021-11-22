#pragma once
#include "Word.h"
#include "Uppercase.h"
#include "Lowercase.h"
#include <fstream>
#include <iostream>
#include <io.h>
#include <fcntl.h> 
#include <codecvt>
#include <Windows.h>

class DB: list<Word*> {
public:
	DB();

	DB(const DB& clone);
	DB& operator=(const DB& clone);

	void Add();
	void Output();

	~DB();
};

