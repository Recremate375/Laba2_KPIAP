#pragma once
#include "libraries.h"
using namespace std;

class exam
{
private:
	static int i;
	int id;
	string name;
	float result;
public:
	exam();
	exam(string n);
	exam(string n, float r);
	~exam();
	void set_information(string, float);
	friend class examinator;
	friend void output(exam&);
	friend int get_id(exam& t);
	static int get_i()
	{
		return i;
	}
};

class examinator
{
public:
	static void set_percent(exam& t, float r)
	{
		t.result = r;
	}
};