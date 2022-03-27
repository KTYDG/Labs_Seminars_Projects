#pragma 
#ifdef __cpluplus
	extern "C" {
#endif

#ifdef  PR38_EXPORTS
#define PR38 __declspec(dllexport)  
#else
#define PR38 __declspec(dllimport)
#endif

class PR38 Type {
public:
	wstring *authors, *title, *publisher, *doi;
	int *year, *type, *number;

	Type() = default;
	~Type();

	void number_add(int a);
	void author_add(wstring a);
	void title_add(wstring a);
	void publisher_add(wstring a);
	void year_add(int a);
	void type_add(int a);
	void doi_add(wstring a);

	int num_return();
	wstring aut_return(bool a = 0);
	wstring tit_return();
	wstring pub_return();
	int yea_return();
	int typ_return();
	wstring doi_return();
};

