// Programming Exercise 1.cpp -- Write a short program that asks for your height in integer inches and then converts your height to feet and inches.
// Have the program use the underscore character to indicate where to type the response.
// Also use a const symbolic constant to represnt the conversion factor
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int INCHES_TO_FEET = 12;

	int heightInInches;

	cout << "How tall are you in inches?__\b\b";
	cin >> heightInInches;

	int feet = heightInInches / INCHES_TO_FEET;
	int inches = heightInInches % INCHES_TO_FEET;

	cout << "That would make you " << feet << "'" << inches << "''";
}