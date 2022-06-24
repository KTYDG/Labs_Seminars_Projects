#pragma warning( disable: 4251 )
#include "emloyee.h"

class COURSEWORK HR_department {
public:
	map<int, Employee *>employees;

	HR_department() = default;
	HR_department(wstring st);

	HR_department &operator=(const HR_department &cl);
	void Add(wstring s, int id, int col, bool &test);
	void set_diff(wstring s);
	void Save();

	virtual ~HR_department();
};


