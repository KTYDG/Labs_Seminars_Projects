#include <iostream>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

template<typename L>
class list {
private:
	template<typename L>
	class Block {
	public:
		Block *NAdress; // ��������� �� ��������� ������
		L Data;			// ������ ������ �����
		// ����������� ������ ������� ������, ���� �� ������ ����� �� ��������� ������, ������ �� ��������
		Block(L Data = L(), Block *NAdress = nullptr) {
			this->Data = Data;
			this->NAdress = NAdress;
		}
		// ���������� ���� ������ ����� ������
		~Block() { delete NAdress; 
		}
	};
	int Size;
	Block<L> *Start;
public:
	// ����������� �� ���������
	list() {
		Size = 0;
		Start = nullptr; 
	}
	// ����� ������� ������
	int size() { return Size; }
	// �������� �� ������ ������ �������
	bool isempty() { return Start == nullptr; }
	// ���������� � ����� ������
	void push_back(L Object) {
		if(isempty()) Start = new Block<L>(Object);
		else {
			Block<L>* NewBlock = this->Start; // C������ ����� ������ ������
			while(NewBlock->NAdress != nullptr) { // ���� �������� �������� �� ��������� ����� NULL
				NewBlock = NewBlock->NAdress; // ���� ���, �� ��������� ������ �� ����� ������
			}
			NewBlock->NAdress = new Block<L>(Object); // ����� ����� - ��������� ����� ������ � ���������� �� ���� �����
		}
		Size += 1;
	}
	// ���������� � ������ ������
	void push_front(L Object) {
		Start = new Block<L>(Object, Start); // ������ ������������� ������ �� ����� � ��������� �� ����� ������� ������
		Size += 1;
	}
	// ������� �������� � ������ �� �������
	void insert(L Object, const int i) {
		int count = 0;
		if(i > Size) return; // ���� ������ ������, ��� ������ ������ - �����
		else if(isempty()) return; // ���� ������ ������, �� �����
		else if(i == 0) Start = new Block<L>(Object, Start); // �� ������, ���� ������� � ������(0) ������� ����
		else {
			Block<L>* NewBlock = this->Start; // C������ ����� ������ ������
			while(NewBlock != nullptr) { // ���� �������� �������� �� ��������� ����� NULL
				if(count == i - 1) {
					NewBlock->NAdress = new Block<L>(Object, NewBlock->NAdress); // ����� ������ - ��������� ����� ������ � ������ ����� �� ������� �������� �� ���� ������� �� ����
					Size += 1;
					return;
				}
				NewBlock = NewBlock->NAdress; // ���� ���, �� ��������� ������ �� ����� ������
				count++;
			}
		}
	}
	// ������ �������� � ������ �� �������
	void swap(L Object, const int i) { // ���������� ����� ������� insert, �� ����� ���, ��� �� ������ ������� �������� �� �������...
		int count = 0;
		if(i > Size) return; // ���� ������ ������, ��� ������ ������ - �����
		else if(isempty()) return; // ���� ������ ������, �����
		else if(i == 0) Start = new Block<L>(Object, Start->NAdress); // �� ������, ���� ������� � ������ ������� ����
		else {
			Block<L>* NewBlock = this->Start; // C������ ����� ������ ������
				while(NewBlock != nullptr) { // ���� �������� �������� �� ��������� ����� NULL
					if(count == i-1) {
						NewBlock-> NAdress = new Block<L>(Object, NewBlock->NAdress); // ����� ������ - �������� �� ����� ������ � ������ ����� �� ��������� ������
						return;
					}
					NewBlock = NewBlock->NAdress; // ���� ���, �� ��������� ������ �� ����� ������
					count++;
				}
		}
	}
	// �������� � ����� ������
	void pop_back() {
		if(isempty()) return;
		Block<L>* NewBlock = this->Start;
		while(NewBlock->NAdress->NAdress != nullptr) { // ���� �������� �������� �� ��������� ����� NULL
			NewBlock = NewBlock->NAdress; // ���� ���, �� ��������� ������ �� ����� ������
		}
		NewBlock->NAdress->Data = NULL;
		//NewBlock->NAdress = nullptr;
		//delete NewBlock->NAdress;
		Size -= 1;
	}
	// �������� � ������ ������
	void pop_front() { // <--- ������ ��-�� Start
		if(isempty()) return;
		Block<L>* NewBlock = this->Start;
		Start = Start->NAdress;
		NewBlock->Data = NULL;
		/*NewBlock->NAdress = nullptr;*/
		//delete NewBlock->NAdress;
		delete NewBlock;
		Size -= 1;
	}
	// ����� ������� ����� �� ��� �������
	L& operator[](const int i) {
		int count = 0;
		Block<L>* NewBlock = this->Start; // C������ ����� ������ ������
		while(NewBlock != nullptr) { // ���� �������� �������� �� ��������� ������ NULL
			if(count == i) { // ���� ����� �� ������� �������
				return NewBlock->Data; // ���������� �������� �������
			}
			NewBlock = NewBlock->NAdress; // ���� ���, �� ��������� ������ �� ������
			count++;
		}
		// ���� ����� �� ����� ������ � �� ����� ��������, ������ ������ ���
	}
	
	
	// ���������� ������
	~list() { delete Start; }
};

int main() {
	list<int>l;
	l.push_back(54);		//[0] 64
	l.push_back(45);		//[1] 128
	l.push_back(35);		//[2] 54
	l.push_back(25);		//[3] 45
							//[4] 35
	l.push_front(128);		//[5] 25
	l.push_front(64);

	l.pop_back();
	l.pop_front();

	//l.swap(72, 2);
	//l.insert(314, 1);

	for(int i = 0; i < l.size(); i++) {
		cout << "List [" << i << "]  " << l[i] << endl;
	}
	return 0;
}