#include "classes.h"
#include "libraries.h"

int exam::i = 1;
exam::~exam() = default;

exam::exam() : name("..."), id(i), result(0.0)
{
	i++;
}

exam::exam(string n) : name(n), id(i), result(0.0)
{
	i++;
}

exam::exam(string n, float r) : name(n), id(i), result(r)
{
	i++;
}

void output(exam & t)
{
	cout << "Exam " << t.id << " - " << t.name << " : " << t.result << "" << endl;
}

int get_id(exam& t)
{
	return t.id;
}

void exam::set_information(string n, float r)
{
	id = i;
	i++;
	this->name = n;
	this->result = r;
}

int input_int(int min, int max)
{
	int i;
	bool fail = true;
	do
	{
		cin >> i;
		if (cin.fail() || i > max || i < min)
			cout << "Error" << endl;
		else
			fail = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (fail);
	return i;
}

float input_float(float min, float max)
{
	float i;
	bool fail = true;
	do
	{
		cin >> i;
		if (cin.fail() || i > max || i < min)
			cout << "Error" << endl;
		else
			fail = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (fail);
	return i;
}