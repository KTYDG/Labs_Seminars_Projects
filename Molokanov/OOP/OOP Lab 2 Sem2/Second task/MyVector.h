#pragma once

class MyVector {
private:
	int count;
	int *arr;
public:
	MyVector();
	~MyVector();

	void push_back(int a);
	void output();
	void insert(int a, const int i);
	void erase(const int first, const int end);
	int size() { return count; }
	int operator[](const int i);
};

