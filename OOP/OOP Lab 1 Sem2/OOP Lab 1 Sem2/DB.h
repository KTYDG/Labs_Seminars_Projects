#pragma once
#include "pch.h"
#include "People.h"

class DB {
public:
	vector<People*>v;
	DB();

	void ShowBase();
	// не хочу делать полноценный интерфейс для обработки большинства запросов сортировки
	// поэтому будет только по заданию
	void ShowEngineers();
	void ShowExcept();
	void Sort();
	~DB();
};

