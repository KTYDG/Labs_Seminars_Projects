#include <iostream>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

class Base {
public:
	string* b;
	Base() { b = new string("Base"); }
	virtual string Out() { return *b; }
	virtual ~Base() { delete b; }
};
class Derived:public Base {
public:
	string* d;
	Derived() { d = new string("Derived"); }
	string Out() { return *d; }
	// ���������� ���� ���� ��������� string b, �� ����������� ���� ������ ��������, ���� ������
	// ������� ��������� ������ ���������� d
	~Derived() { delete d; } 
};

int Size = 0; // ������ �������
Base **g_array = new Base*[Size]; // �������� �������
// ���������� ����� �������� �������
void Append(Base* b) {
	Size += 1;
	auto** g_array1 = new Base*[Size]; // �������� ����� �������
	// ����������� ������� � ����� � ��������� ������ �� ����
	// ���� ��������, ����� ���������� ������������ ������, ������� ������� �� Base � Base**
	memcpy(g_array1, g_array, (Size - 1) * sizeof(Base**));
	delete[] g_array;		// �������� ������������� �������
	g_array1[Size - 1] = b; // ���������� � ����� ����� ����� ������
	g_array = g_array1;		// ����������� ����� ������������� �������
}

int main() {
	srand(time(0));
	// ��������� ���������� �������
	for(int i = 0; i < 11; i++) {
		if(rand() % 2 == 0) {
			Append(new Base);
		}
		else {
			Append(new Derived);
		}
	}
	// ����� �������
	for(int i = 0; i < Size; i++) {
		cout << g_array[i]->Out() << endl;
	}
	// �������� �������
	for(int i = 0; i < Size; i++) {
		delete g_array[i]; // �������� ����������� �������, ������ ���������� ������ �� ����������
	}
	delete[] g_array; // �������� ��������� ������, ��������� ����� ��������
	return 0;
}
