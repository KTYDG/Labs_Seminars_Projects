#include <map>
#include <string>
using namespace std;

struct comp {
	bool operator()(string m1, string m2) const {
		return m1 < m2;
	}
}c;

int main() {
	map<int, string, comp>mm;
	mm.emplace(1, "b");
	mm.emplace(2, "a");
	mm.emplace(3, "d");
	mm.emplace(4, "c");
}