// Write a program that matches the description of the program in Programming Exercise 8, but use a string class object instead of an array.
// Include the string header file and use a relational operator to make the comparison test

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter words (to stop, type the word done):\n";

	int wordsCounted = 0;
	string input;
	
	do
	{
		wordsCounted++;

		cin >> input;

	} while (input != "done");

	cout << "You entered a total of " << (wordsCounted - 1) << " words.";
}