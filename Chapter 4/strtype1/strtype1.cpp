// strtype1.cpp -- using the C++ string class.

#include "pch.h"
#include <iostream>
#include <string>	// Make string class available.

int main()
{
	using namespace std;

	char charr1[20];				// Create an empty array.
	char charr2[20] = "jaguar";		// Create an initialized array.
	string str1;					// Create an empty string object.
	string str2 = "panther";		// Create an initailized string.

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;		// User cin for input

	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;	// Use cout for output.
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;	// Use array notation.
}