/* ProgrammingExercise04.cpp 
When you join the Benevolent Order of Programmer, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name. Write a pro-
gram that can list members by real name, by job title, by secret name, or by a mem-
ber's preference. Base the program on the following structure:

// Benevolent Order of Programmers name structure
struct bop {
	char fullname[strsize];	// real name
	char title[strsize];	// job title
	char bopname[strsize];	// secret BOP name
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alterna-
tives:

a. display by name		b. display by title
c. display by bopname	d. display by preference
q. quit

Note that "display by preference" does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer's job title. A sample run
may look something like the following: Read book*/

#include "pch.h"
#include <iostream>

void display_names();
void display_titles();
void display_bopnames();
void display_preferences();

const int strsize = 50;
const int memberSize = 3;

// Benevolent Order of Programmers name structure
struct bop {
	char fullname[strsize];	// real name
	char title[strsize];	// job title
	char bopname[strsize];	// secret BOP name
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

const bop members[3]
{
	{ "Thomas", "Biggest Poop", "Floshy", 0 },
	{ "Daniel", "Coolest Dude", "Ploshy", 1 },
	{ "Jeff", "Funzone", "Ffej", 2 },
};

using namespace std;

int main()
{
	char ch;

	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name	b. display by title" << endl;
	cout << "c. display by bopname	d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";

	cin >> ch;
	
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a': display_names();
			break;
		case 'b': display_titles();
			break;
		case 'c': display_bopnames();
			break;
		case 'd': display_preferences();
			break;
		default: cout << "Not an option!";
			break;
		}

		cout << "Next choice: ";
		cin >> ch;
	}

	cout << "Bye!";
}
void display_names()
{
	for (int i = 0; i < memberSize; i++)
		cout << members[i].fullname << endl;
}
void display_titles()
{
	for (int i = 0; i < memberSize; i++)
		cout << members[i].title << endl;
}
void display_bopnames()
{
	for (int i = 0; i < memberSize; i++)
		cout << members[i].bopname << endl;
}
void display_preferences()
{
	for (int i = 0; i < memberSize; i++)
	{
		if (members[i].preference == 0)
		{
			cout << members[i].fullname << endl;
		}
		else if (members[i].preference == 1)
		{
			cout << members[i].title << endl;
		}
		else if (members[i].preference == 2)
		{
			cout << members[i].bopname << endl;
		}
	}
}