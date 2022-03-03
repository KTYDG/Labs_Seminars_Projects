#include <iostream>
#include <map>
using namespace std;

struct Leaks {
	~Leaks() { _CrtDumpMemoryLeaks(); }
} leaks;

struct comp {
	bool operator()(string s1, string s2) const {
		s1.erase(s1.begin(), s1.begin() + 2);
		s2.erase(s2.begin(), s2.begin() + 2);
		return s1 < s2;
	}
} compare;

int main() {
	map<string, int, comp>m;
	m.emplace("--acbd", 1);
	m.emplace("--abcd", 1);
	m.emplace("aaz", 1);
	m.emplace("--bdc", 1);
	m.emplace("abz", 1); // Добавлен не будет, так как идет сравнение только по 3 элементу и дальше, а он совпадает с "aaz"
	m.emplace("--bcd", 1);
	m.emplace("az", 1); // Тут третий элемент "пустой" поэтому при последующем добавлении любого другого элемента < 3, то он добавлен не будет
	m.emplace("aи", 1); // Доабавлен не будет по прошлому элементу
	m.emplace("a", 1);

	for(map<string, int, comp>::iterator i = m.begin(); i != m.end(); ++i) {
		cout << i->first << "\t" << i->second << endl;
	}
}