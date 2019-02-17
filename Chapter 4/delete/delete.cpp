// delete.cpp -- using the delete operator

#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;
char* getname(void);	// Function prototype.

int main()
{
	char* name;			// Create pointer but no storage.

	name = getname();	// Assign address of string to name.
	cout << name << " at " << (int*)name << "\n";

	name = getname();	// Reuse freed memory
	cout << name << " at " << (int*)name << "\n";
	
	delete[] name;	// Memory freed
}
char* getname(void) // Return pointer to new string
{
	char temp[80];	// Temporary storage

	cout << "Enter last name: ";
	cin >> temp;

	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);	// Copy string into smaller space

	return pn;	// Temp lost when function ends
}
