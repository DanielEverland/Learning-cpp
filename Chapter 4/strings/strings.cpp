// strings.cpp -- storing strings in an array

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	const int Size = 12;
	char name1[Size];				// Empty array
	char name2[Size] = "C++owboy";	// Initialized array

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?" << endl;

	cin >> name1;

	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored" << endl;
	cout << "in an array of " << sizeof(name1) << " bytes." << endl;
	cout << "Your initial is " << name1[0] << ".\n";
	
	name2[3] = '\0';	// Set to null character
	
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
}