// strtype3.cpp -- more string class features

#include "pch.h"
#include <iostream>
#include <string>		// Make string class available
#include <cstring>		// C-style string library

int main()
{
	using namespace std;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// Assignment for string objects and character arrays
	str1 = str2;			// Copy str2 to str1
	strcpy_s(charr1, charr2);	// Copy charr2 to charr1

	// Appending for string objects and character arrays
	str1 += " paste";			// Add paste to the end of str1
	strcat_s(charr1, " juice");	// Add juice to the end of charr1

	// Finding the length of a string object and a C-style string
	int len1 = str1.size();		// Obtain length of str1
	int len2 = strlen(charr1);	// Obtain length of charr1

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
}