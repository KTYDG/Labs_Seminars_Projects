#pragma once
#include "pch.h"
#include "People.h"

class DB {
public:
	vector<People*>v;
	DB();

	void ShowBase();
	// �� ���� ������ ����������� ��������� ��� ��������� ����������� �������� ����������
	// ������� ����� ������ �� �������
	void ShowEngineers();
	void ShowExcept();
	void Sort();
	~DB();
};

