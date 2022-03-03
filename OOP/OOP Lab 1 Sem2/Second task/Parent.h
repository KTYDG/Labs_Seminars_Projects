#pragma once

class Parent {
public:
	string* str;

	Parent();
	Parent(string x);
	Parent(const Parent& cl);
	virtual ~Parent();

	virtual void Copy(vector<Parent*>&v);
	virtual string Get();
};

