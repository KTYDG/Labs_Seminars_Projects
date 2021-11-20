#include "DB.h"

template<class T>
DB<T>::DB() {}
// Конструктор копирования
template<class T>
DB<T>::DB(const DB& clone) {
	for(typename vector<T>::const_iterator i = clone.begin(); i != clone.end(); ++i) {
		(*i)->Clone(*this);
	}
}
// Оператор присваивания копированием 
template<class T>
DB<T>& DB<T>::operator=(const DB& clone) {
	if(this != &clone) {
		for(typename vector<T>::iterator i = this->begin(); i != this->end(); ++i) {
			delete (*i);
		}
		this->clear();
		for(typename vector<T>::const_iterator i = clone.begin(); i != clone.end(); ++i) {
			(*i)->Clone(*this);
		}
	}
	return *this;
}
// Добавление в вектор
template<class T>
void DB<T>::Add(T t) {
	typename vector<T>::push_back(t);
}
// Удаление до 2 уникальных элементов
template<class T>
void DB<T>::EErase() {
	// Сортировка, чтобы нормально провести сравнение с помощью юник
	sort(this->begin(), this->end());
	//Юник сравнивает два соседних элемента и он удаляется с помощью erase, если повтор
	this->erase(unique(this->begin(), this->end(), comp<Molokanov*>), this->end());
	// Смена мест, сортировка ставить конец басни в начало, надо вернуть ее назад
	swap(*(this->begin()), *(this->end()-1));
}
// Вывод в файл
template<class T>
void DB<T>::Output() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wofstream output;
	output.open(L"Новый муравей.txt");
	output.imbue(utf8_locale);

	if(!output) { wcout << L"Can't open file \"Новый муравей.txt\""; }
	else {
		for(typename vector<T>::iterator i = this->begin(); i != this->end(); ++i) {
			output << (*i)->Get();
		}
	}
	output.close();
}

template<class T>
DB<T>::~DB() {
	// второй вариант обозначить begin и end
	for(typename vector<T>::iterator i = typename vector<T>::begin(); i != typename vector<T>::end(); ++i) { 
		delete (*i);
	}
	this->clear();
}
template class DB<Molokanov*>;



//Danila* compare;
/*wstring compare;*/
// Флаги, которые станут 1, если элемент класса найден
//short FDanila = 0, FMolokanov = 0;
//for(int i = 0; i < this->size(); i++) {
//	//typename vector<T>::iterator k = (this->begin() + i);
//	//compare = (*k)->Get();
//	//// Удаление всего конца, если две части басни уже найдены
//	//if(FMolokanov == 1 and FDanila == 1) {
//	//	this->erase(this->begin() + i, this->end());
//	//	break;
//	//}
//	//// Поиск производного класса
//	//else if( compare.substr(0, compare.find(L' ')) == L"\"Не" and FDanila == 0) {
//	//	FDanila = 1;
//	//	continue;
//	//}
//	//// Поиск родительского класса
//	//else if(compare.substr(0, compare.find(L' ')) == L"Попрыгунья" and FMolokanov == 0) {
//	//	FMolokanov = 1;
//	//	continue;
//	//}
//	
//	//// Поиск производного класса
//	//else if((compare = dynamic_cast<Danila*>(*(this->begin() + i))) and FDanila == 0) {
//	//	FDanila = 1;
//	//	continue;
//	//}
//	//// динамик каст ужасно работает для определения базового класса, поэтому тайпайди
//	//else if(typeid(**(this->begin() + i)) == typeid(Molokanov) and FMolokanov == 0) {
//	//	FMolokanov = 1;
//	//	continue;
//	//}
//	// Были ОГРОМНЫЕ утечки от того, что объекты вектора не удалялись, перед тем
//	// как "стереться", поэтому сначала нужно их удалять
//	delete *(this->begin() + i); 
//	this->erase(this->begin() + i);
//	i--; // Если удалили - надо вернуться назад на 1
//}


//template<class T>
//void DB<T>::Sort() {
//	//wstring compare;
//	//typename vector<T>::iterator k = this->begin();
//	//compare = (*k)->Get();
//	////if(typeid(**(this->begin())) == typeid(Molokanov)) return;
//	//if(compare.substr(0, compare.find(L' ')) == L"Попрыгунья") return;
//	//else {
//	//	Molokanov* buffer = *(this->begin());
//	//	// Изначально конец вектора был записан как end(), но происходило выпадение за пределы вектора
//	//	// В итоге замененно на begin()+1, скорее всего end()-1 так же работает
//	//	*(this->begin()) = *(this->begin()+1);
//	//	*(this->begin() + 1) = buffer;
//	//}
//}

