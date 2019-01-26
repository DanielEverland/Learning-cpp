// morechar.cpp -- the char type and int are interconnected.
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char ch = 'M';	// Assign ASCII code for M to ch.
	int i = ch;		// Store same code in an int.

	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	// Using the cout.put() member functio nto display a char.
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put('!');

	cout << endl << "Done" << endl;
}