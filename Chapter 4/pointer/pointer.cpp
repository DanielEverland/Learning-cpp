// pointer.cpp -- out first pointer variable

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	int updates = 6;		// Declare a variable.
	int* p_updates;		// Declare a pointer to an int.
	p_updates = &updates;	// Assign address of int to pointer.

	// Express values two ways.
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// Express address two ways.
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// Use pointer to change value
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
}