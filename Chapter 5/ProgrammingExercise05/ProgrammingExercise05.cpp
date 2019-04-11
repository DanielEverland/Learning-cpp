/* ProgrammingExercise05.cpp 

You sell the book C++ for fools. Write a program that has you enter a year's worth of monthly sales (in terms of number of books, not of money).
The program should use a loop to prompt you by month, using an array of char * (or an array of string objects, if you prefer)
	initialized to the month strings and storing the input data in an array of int.
Then, the program should find the sum of the array contents and report the total sales for the year
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int MonthsInYear = 12;
const string MonthNames[MonthsInYear]
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
};

int main()
{
	int booksPerMonth[MonthsInYear];

	for (int i = 0; i < MonthsInYear; i++)
	{
		cout << "How many books were sold in " << MonthNames[i] << "?" << endl;
		cin >> booksPerMonth[i];
	}

	cout << endl;

	int sum = 0;
	for (int i = 0; i < MonthsInYear; i++)
	{
		cout << MonthNames[i] << ": " << booksPerMonth[i] << endl;
		sum += booksPerMonth[i];
	}

	cout << "Yearly Sales: " << sum << endl;
}