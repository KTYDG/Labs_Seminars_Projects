#pragma once
class Type {
public:
	wstring *type, *name;
	int *year, *page;

	Type() = default;
	Type(const Type& cl);
	Type(wstring s);
	~Type();

	wstring GetName();
	Type* Copy();
	void Cout();
};
