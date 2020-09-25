#include <iostream>
#include <string>

using namespace std;

int input(int, int);

class exam
{
private:
	int id;
	string name;
	int mark;
public:
	exam() 
	{
		id = 0;
		name = "";
		mark = 0;
	}
	exam(int id, string name, int mark) 
	{
		this->id = id;
		this->name = name;
		this->mark = mark;
	}
	void set_id(int id) 
	{
		this->id = id;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	int get_id(exam &e)
	{
		return e.id;
	}
	int get_mark(exam &e) {
		return e.mark;
	}
	friend void output(exam);
	friend class examinator;
	~exam()
	{ }
};

class examinator
{
public:
	static void set_mark(exam &a, int m) {
		a.mark = m;
	}
};

void output(exam a)
{
	cout << "id: " << a.id << "\t name: " << a.name << "\t mark: " << endl;
}

int input(int min, int max)
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

int main()
{
	exam a;
	exam b;
	int j;
	exam c[5];
	
	return 0;
}