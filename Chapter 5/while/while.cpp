// while.cpp -- introducing the while loop

#include "pch.h"
#include <iostream>

const int ArSize = 20;

int main()
{
	using namespace std;
	char name[ArSize];

	cout << "Yout first name, please: ";
	cin >> name;

	cout << "Here is your name, verticalized and ASCIIzed:\n";
	int i = 0;	// Start at beginning of string.

	while (name[i] != '\0')	// Process to the end of the string.
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;	// Don't forget this step.
	}
}