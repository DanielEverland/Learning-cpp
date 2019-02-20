/* ProgrammingExercise01.cpp
Write a C++ program that requests and displays information as shown in the following example of output:
What is your first name? *Betty Sue*
What is your last name? *Yewe*
What letter grade do you deserve? *B*
What is your age? *22*
Name: Yewe, Betty Sue
Grade: C
Age: 22

Note that the program should be able to accept first names that comprise more than one word.
Also note that the program adjusts the grade downward – that is, up one letter.
Assume that the user requests an A, a B or a C so you don't have to worry about the gap between D and F
*/

#include "pch.h"
#include <iostream>

using namespace std;

const int ArrayLength = 20;

int main()
{
	char firstName[ArrayLength];
	char lastName[ArrayLength];
	char grade;
	char age[ArrayLength];

	cout << "What is your first name? ";
	cin.getline(firstName, ArrayLength);

	cout << "What is your last name? ";
	cin.getline(lastName, ArrayLength);

	cout << "What letter grade do you deserve? ";
	cin >> grade;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lastName << ", " << firstName << endl;

	grade++;
	cout << "Grade: " << grade << endl;

	cout << "Age: " << age << endl;
}