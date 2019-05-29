// sayings2.cpp -- using pointers to objects

#include <iostream>
#include <cstdlib>		// (or stdlib.h) for rand(), srand()
#include <ctime>		// (or time.h) for time()

#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	using namespace std;
	String name;

	cout << "Hi, what's your name?\n>> ";
	cin >> name;

	cout << name << ", please enter up to " << ArSize
		<< " short sayings <empty line to quit>:\n";

	String sayings[ArSize];
	char temp[MaxLen];					// temporary storage string
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);

		while (cin && cin.get() != '\n')
			continue;

		if (!cin || temp[0] == '\0')		// empty line?
			break;				// i not incremeneted
		else
			sayings[i] = temp;	// overloaded assignment
	}
	int total = i;		// total # of lines read

	if (total > 0)
	{
		cout << "Here are your savings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i] << endl;

		// use pointers to keep track of shortest, first strings
		String* shortest = &sayings[0];		// initialize to the first object
		String* first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first)	// compare values
				first = &sayings[i];	// assign address
		}

		cout << "Shortest saying:\n" << *shortest << endl;
		cout << "First alphabetically:\n" << *first << endl;

		srand(time(0));
		int choice = rand() % total;	// pick index at random

		// use new to create, initialize new String object
		String* favorite = new String(sayings[choice]);
		cout << "My favorite saying:\n" << *favorite << endl;
		delete favorite;
	}
	else
		cout << "No input! Bye.\n";
}