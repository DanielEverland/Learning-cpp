/* ProgrammingExercise03.cpp
Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string,
consisting of the user's last name followed by a comma, a space an a first name. Use char arrays and functions from the cstring header file.

A sample run could look like this:
Enter your first name: *Flip*
Enter your last name: *Fleming*
Here's the information in a single string: Fleming, Flip
*/

#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

const int arrayLength = 20;

int main()
{
	char firstName[arrayLength];
	char lastName[arrayLength];

	cout << "Enter your first name: ";
	cin >> firstName;

	cout << "Enter your last name: ";
	cin >> lastName;

	char concatenatedString[arrayLength * 6] = "";
	strcat(concatenatedString, lastName);
	strcat(concatenatedString, ", ");
	strcat(concatenatedString, firstName);

	cout << "Here's the information in a single string: " << concatenatedString;
}