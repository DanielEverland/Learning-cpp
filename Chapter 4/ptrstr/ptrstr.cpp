// ptrstr.cpp -- using pointers to strings

#include "pch.h"
#include <iostream>
#include <cstring>	// Declare strlen(), strcpy()

int main()
{
	using namespace std;

	char animal[20] = "bear";	// Animal holds bear
	const char* bird = "wren";	// bird holds address of string
	char* ps;					// Uninitialized

	cout << animal << " and " << bird << "\n";	// Display bear and wren
	// cout << ps << "\n; May display garbage, may cause a crash

	cout << "Enter a kind of animal: ";
	cin >> animal;		// ok if input < 20 chars
	// cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space

	ps = animal;			// Set ps to point to string
	cout << ps << "!\n";	// ok, same as using animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];	// get new storage
	strcpy(ps, animal);					// copy string to new storage
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	delete[] ps;
}