// nested.cpp -- nested loops and 2-D array

#include "pch.h"
#include <iostream>

const int Cities = 5;
const int Years = 4;

int main()
{
	using namespace std;
	const char* cities[Cities] =	// array of pointers
	{								// to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista",
	};

	int maxTemps[Years][Cities] =	// 2-D array
	{
		{ 96, 100, 87, 101, 105 },	// values for maxTemps[0]
		{ 96, 98, 91, 107, 104 },	// values for maxTemps[1]
		{ 97, 101, 93, 108, 107 },	// values for maxTemps[2]
		{ 98, 103, 95, 109, 108 },	// values for maxTemps[3]
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; year++)
		{
			cout << maxTemps[year][city] << "\t";
		}
		cout << endl;
	}
}