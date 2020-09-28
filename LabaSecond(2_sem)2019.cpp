#include "libraries.h"
#include "classes.h"


int main()
{
	float r;
	int a = 1, number;
	string s;
	system("chcp 1251>null");
	exam e1; exam e2("exam");
	output(e1); output(e2);
	cout << "Enter the percentage of completion for the " << get_id(e1) << " exam: ";
	r = input_float();
	examinator::set_percent(e1, r);
	cout << "Enter the percentage of completion for the " << get_id(e2) << " exam: ";
	r = input_float();
	examinator::set_percent(e2, r);
	output(e1); output(e2);
	vector<exam> ms;
	ms.push_back(e1); ms.push_back(e2);
	while (a != 0)
	{
		cout << "What do you want to do?\n1 - Add exam\n2 - Display exams\n3 - Set exam completion percentage\n0 - Exit" << endl;
		a = input_int(0, 3);
		switch (a)
		{
		case 1:
			cout << "Enter the exam name: ";
			cin >> s;
			ms.emplace_back(s);
			break;
		case 2:
			for (int j = 0; j < (exam::get_i() - 1); j++)
			{
				output(ms[j]);
			}
			break;
		case 3:
			cout << "Enter the exam number to change: ";
			number = input_int(1, exam::get_i() - 1);
			output(ms[number - 1]);
			cout << "Enter the percentage of the exam completed: ";
			r = input_float();
			examinator::set_percent(ms[number - 1], r);
			break;
		case 0:
			exit(0);
			break;
		}
	}
}