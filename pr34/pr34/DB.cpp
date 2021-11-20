#include "DB.h"

template<class T>
DB<T>::DB() {}
// ����������� �����������
template<class T>
DB<T>::DB(const DB& clone) {
	for(typename vector<T>::const_iterator i = clone.begin(); i != clone.end(); ++i) {
		(*i)->Clone(*this);
	}
}
// �������� ������������ ������������
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
// ���������� � ������
template<class T>
void DB<T>::Add(T t) {
	typename vector<T>::push_back(t);
}
// �������� �� 2 ���������� ���������
template<class T>
void DB<T>::EErase() {
	// ����������, ����� ��������� �������� ��������� � ������� ����
	sort(this->begin(), this->end());
	//���� ���������� ��� �������� �������� � �� ��������� � ������� erase, ���� ������
	this->erase(unique(this->begin(), this->end(), comp<Molokanov*>), this->end());
	// ����� ����, ���������� ������� ����� ����� � ������, ���� ������� �� �����
	swap(*(this->begin()), *(this->end()-1));
}
// ����� � ����
template<class T>
void DB<T>::Output() {
	const locale utf8_locale = locale(locale(), new codecvt_utf8<wchar_t>());

	wofstream output;
	output.open(L"����� �������.txt");
	output.imbue(utf8_locale);

	if(!output) { wcout << L"Can't open file \"����� �������.txt\""; }
	else {
		for(typename vector<T>::iterator i = this->begin(); i != this->end(); ++i) {
			output << (*i)->Get();
		}
	}
	output.close();
}

template<class T>
DB<T>::~DB() {
	// ������ ������� ���������� begin � end
	for(typename vector<T>::iterator i = typename vector<T>::begin(); i != typename vector<T>::end(); ++i) { 
		delete (*i);
	}
	this->clear();
}
template class DB<Molokanov*>;



//Danila* compare;
/*wstring compare;*/
// �����, ������� ������ 1, ���� ������� ������ ������
//short FDanila = 0, FMolokanov = 0;
//for(int i = 0; i < this->size(); i++) {
//	//typename vector<T>::iterator k = (this->begin() + i);
//	//compare = (*k)->Get();
//	//// �������� ����� �����, ���� ��� ����� ����� ��� �������
//	//if(FMolokanov == 1 and FDanila == 1) {
//	//	this->erase(this->begin() + i, this->end());
//	//	break;
//	//}
//	//// ����� ������������ ������
//	//else if( compare.substr(0, compare.find(L' ')) == L"\"��" and FDanila == 0) {
//	//	FDanila = 1;
//	//	continue;
//	//}
//	//// ����� ������������� ������
//	//else if(compare.substr(0, compare.find(L' ')) == L"����������" and FMolokanov == 0) {
//	//	FMolokanov = 1;
//	//	continue;
//	//}
//	
//	//// ����� ������������ ������
//	//else if((compare = dynamic_cast<Danila*>(*(this->begin() + i))) and FDanila == 0) {
//	//	FDanila = 1;
//	//	continue;
//	//}
//	//// ������� ���� ������ �������� ��� ����������� �������� ������, ������� ��������
//	//else if(typeid(**(this->begin() + i)) == typeid(Molokanov) and FMolokanov == 0) {
//	//	FMolokanov = 1;
//	//	continue;
//	//}
//	// ���� �������� ������ �� ����, ��� ������� ������� �� ���������, ����� ���
//	// ��� "���������", ������� ������� ����� �� �������
//	delete *(this->begin() + i); 
//	this->erase(this->begin() + i);
//	i--; // ���� ������� - ���� ��������� ����� �� 1
//}


//template<class T>
//void DB<T>::Sort() {
//	//wstring compare;
//	//typename vector<T>::iterator k = this->begin();
//	//compare = (*k)->Get();
//	////if(typeid(**(this->begin())) == typeid(Molokanov)) return;
//	//if(compare.substr(0, compare.find(L' ')) == L"����������") return;
//	//else {
//	//	Molokanov* buffer = *(this->begin());
//	//	// ���������� ����� ������� ��� ������� ��� end(), �� ����������� ��������� �� ������� �������
//	//	// � ����� ��������� �� begin()+1, ������ ����� end()-1 ��� �� ��������
//	//	*(this->begin()) = *(this->begin()+1);
//	//	*(this->begin() + 1) = buffer;
//	//}
//}

