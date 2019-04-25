/* ProgrammingExercise02.cpp
Write a program that reads up to 10 donations values into an array of double. (Or, if
you prefer, use an array template object). The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double donations[10];
	double total = 0;
	int donationCount = 0;
	double input;

	while (donationCount < 10)
	{
		cout << "#" << donationCount + 1 << ": ";

		if (cin >> input)
		{
			donations[donationCount] = input;
			total += input;

			donationCount++;
		}
		else
		{
			break;
		}
	}

	double average = total / donationCount;
	int aboveAverageCount = 0;
	
	for (int i = 0; i < donationCount; i++)
	{
		if (donations[i] > average)
			aboveAverageCount++;
	}

	cout << "Average is " << average << " and " << aboveAverageCount << " donations are above average!";
}