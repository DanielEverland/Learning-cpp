// ProgrammingExercise06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stonewt.h"

using namespace std;

const int ArrSize = 6;
const int ElementsToEnter = 3;

int main()
{
	Stonewt arr[ArrSize]
	{
		{ 65 },
		{ 540 },
		{ 23 },
	};

	for (int i = ArrSize - ElementsToEnter; i < ArrSize; i++)
	{
		double pounds = 0;
		cout << "Enter pounds of #" << i + 1 << ": ";
		while (!(cin >> pounds))
			cout << "Please enter a decimal value: ";

		arr[i] = Stonewt(pounds);
	}

	Stonewt comparer(11, 0);

	int valuesAboveOrEqualComparer, lowest, highest = 0;
	valuesAboveOrEqualComparer = 0;

	for (int i = 0; i < ArrSize; i++)
	{
		if (i == 0)
		{
			lowest = arr[i];
			highest = arr[i];
		}
		else
		{
			if (lowest > double(arr[i]))
				lowest = arr[i];

			if (highest < double(arr[i]))
				highest = arr[i];
		}

		if (arr[i] >= comparer)
			valuesAboveOrEqualComparer++;
	}

	cout << "Min: " << lowest << ", Max: " << highest << ", Values >= 11 Pounds: " << valuesAboveOrEqualComparer << endl;
}