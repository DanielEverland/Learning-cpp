/* ProgrammingExercise06.cpp

Do Programming Exercise 6 but use a two-dimensional array to store input for 3 years of monthly sales.
Report the total sales for each individual year and for the combined years.

*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int MonthsInYear = 12;
const int YearsToStore = 3;
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
	int monthlySales[YearsToStore][MonthsInYear];

	cout << "Please input book sales per month!" << endl;

	for (int year = 0; year < YearsToStore; year++)
	{
		for (int month = 0; month < MonthsInYear; month++)
		{
			cout << MonthNames[month] << " year " << year + 1 << ": ";
			cin >> monthlySales[year][month];
		}
	}

	cout << endl;

	int sum = 0;
	for (int year = 0; year < YearsToStore; year++)
	{
		for (int month = 0; month < MonthsInYear; month++)
		{
			cout << "Year " << year + 1 << ", " << MonthNames[month] << ": " << monthlySales[year][month] << endl;
			sum += monthlySales[year][month];
		}
	}

	cout << "Sum: " << sum;
}