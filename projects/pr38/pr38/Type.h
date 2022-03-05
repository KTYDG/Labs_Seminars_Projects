#pragma once

#ifdef  PR38_EXPORTS
#define PR38 __declspec(dllexport)  
#else
#define PR38 __declspec(dllimport)
#endif

class PR38 Type {
private:
	wstring *authors, *title, *publisher, *doi;
	int *year, *type;
public:
	Type() = default;
	~Type();

	void author_add(wstring a);
	void title_add(wstring a);
	void publisher_add(wstring a);
	void year_add(int a);
	void type_add(int a);
	void doi_add(wstring a);
};

