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
		Block *NAdress; // Укзаатель на следующий объект
		L Data;			// Хранит данные блока
		// Конструктор нового объекта списка, если не задать адрес на следующий объект, значит он конечный
		Block(L Data = L(), Block *NAdress = nullptr) {
			this->Data = Data;
			this->NAdress = NAdress;
		}
		// Деструктор всех блоков после Старта
		~Block() { delete NAdress; 
		}
	};
	int Size;
	Block<L> *Start;
public:
	// Конструктор по умолчания
	list() {
		Size = 0;
		Start = nullptr; 
	}
	// Вывод размера списка
	int size() { return Size; }
	// Проверка на пустой первый элемент
	bool isempty() { return Start == nullptr; }
	// Добавление в конец списка
	void push_back(L Object) {
		if(isempty()) Start = new Block<L>(Object);
		else {
			Block<L>* NewBlock = this->Start; // Cоздаем новый объект списка
			while(NewBlock->NAdress != nullptr) { // Идет проверка является ли следующий адрес NULL
				NewBlock = NewBlock->NAdress; // Если нет, то двигаемся дальше до конца списка
			}
			NewBlock->NAdress = new Block<L>(Object); // Нашли конец - вставляем новый объект и запоминаем на него адрес
		}
		Size += 1;
	}
	// Добавление в начало списка
	void push_front(L Object) {
		Start = new Block<L>(Object, Start); // Замена существующего старта на новый и указатель на адрес старого старта
		Size += 1;
	}
	// Вставка элемента в список по индексу
	void insert(L Object, const int i) {
		int count = 0;
		if(i > Size) return; // Если индекс больше, чем размер списка - выход
		else if(isempty()) return; // Если список пустой, то выйти
		else if(i == 0) Start = new Block<L>(Object, Start); // На случай, если вставка в первый(0) элемент идет
		else {
			Block<L>* NewBlock = this->Start; // Cоздаем новый объект списка
			while(NewBlock != nullptr) { // Идет проверка является ли следующий адрес NULL
				if(count == i - 1) {
					NewBlock->NAdress = new Block<L>(Object, NewBlock->NAdress); // Нашли индекс - вставляем новый объект и ставим адрес на элемент стоявший на этом индексе до него
					Size += 1;
					return;
				}
				NewBlock = NewBlock->NAdress; // Если нет, то двигаемся дальше до конца списка
				count++;
			}
		}
	}
	// Меняет значение в списке по индексу
	void swap(L Object, const int i) { // Изначально хотел сделать insert, но вышло так, что он только заменял значение по индексу...
		int count = 0;
		if(i > Size) return; // Если индекс больше, чем размер списка - выход
		else if(isempty()) return; // Если список пустой, выйти
		else if(i == 0) Start = new Block<L>(Object, Start->NAdress); // На случай, если вставка в первый элемент идет
		else {
			Block<L>* NewBlock = this->Start; // Cоздаем новый объект списка
				while(NewBlock != nullptr) { // Идет проверка является ли следующий адрес NULL
					if(count == i-1) {
						NewBlock-> NAdress = new Block<L>(Object, NewBlock->NAdress); // Нашли индекс - заменяем на новый объект и ставим адрес на следующий индекс
						return;
					}
					NewBlock = NewBlock->NAdress; // Если нет, то двигаемся дальше до конца списка
					count++;
				}
		}
	}
	// Удаление с конца списка
	void pop_back() {
		if(isempty()) return;
		Block<L>* NewBlock = this->Start;
		while(NewBlock->NAdress->NAdress != nullptr) { // Идет проверка является ли следующий адрес NULL
			NewBlock = NewBlock->NAdress; // Если нет, то двигаемся дальше до конца списка
		}
		NewBlock->NAdress->Data = NULL;
		//NewBlock->NAdress = nullptr;
		//delete NewBlock->NAdress;
		Size -= 1;
	}
	// Удаление с начала списка
	void pop_front() { // <--- УТЕЧКА из-за Start
		if(isempty()) return;
		Block<L>* NewBlock = this->Start;
		Start = Start->NAdress;
		NewBlock->Data = NULL;
		/*NewBlock->NAdress = nullptr;*/
		//delete NewBlock->NAdress;
		delete NewBlock;
		Size -= 1;
	}
	// Поиск объекта листа по его индексу
	L& operator[](const int i) {
		int count = 0;
		Block<L>* NewBlock = this->Start; // Cоздаем новый объект списка
		while(NewBlock != nullptr) { // Идет проверка является ли следующий объект NULL
			if(count == i) { // Если дошли до нужного объекта
				return NewBlock->Data; // Возвращаем значение объекта
			}
			NewBlock = NewBlock->NAdress; // Если нет, то двигаемся дальше по списку
			count++;
		}
		// Если дошли до конца списка и не нашли элемента, значит такого нет
	}
	
	
	// Деструктор Старта
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