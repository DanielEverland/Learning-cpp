// ProgrammingExercise09.cpp

#include <iostream>

using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	
	int class_size;
	cin >> class_size;

	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);
	delete[] ptr_stu;

	cout << "Done\n";
}

int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Enter a name for student #" << i + 1 << ": ";

		if (!cin.getline(pa[i].fullname, SLEN))
		{
			cout << "Bad input!";
			break;
		}
		else if (pa[i].fullname[0] == '\n')
		{
			cout << "Blank line!";
			break;
		}

		cout << "Enter " << pa[i].fullname << "'s hobby: ";
		if (!cin.getline(pa[i].hobby, SLEN))
		{
			cout << "Bad input!";
			break;
		}

		cout << "Enter their oop level: ";
		if (!(cin >> pa[i].ooplevel))
		{
			cout << "Bad input!";
			break;
		}
		cin.get();
		cout << endl;
	}

	return i;
}

void display1(student st)
{
	cout << st.fullname << "'s hobby is " << st.hobby << " and their oop level is " << st.ooplevel << endl;
}

void display2(const student* st)
{
	cout << st->fullname << "'s hobby is " << st->hobby << " and their oop level is " << st->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << pa[i].fullname << "'s hobby is " << pa[i].hobby << " and their oop level is " << pa[i].ooplevel << endl;
	}
}