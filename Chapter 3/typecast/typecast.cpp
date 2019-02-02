// typecast.cpp -- forcing type changes
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	int auks, bats, coots;

	// The following statement adds the values as double, then converts the result to int.
	auks = 19.99 + 11.99;

	// These statements adds values as ints.
	bats = (int)19.99 + (int)11.99;		// Old C syntax.
	coots = int(19.99) + int(11.99);	// New C++ syntax.
	
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots= " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";	// Print as char
	cout << int(ch) << endl;					// Print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;		// Using static_cast
}