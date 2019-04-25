/* ProgrammingExercise05.cpp
The Kingdom of Neutronia, where the unit of currency is the tvarp, has the fol-
lowing income tax code:

	First 5,000 tvarps:		0% tax
	Next 10,000 tvarps:		10% tax
	Next 20,000 tvarps:		15% tax
	Tvarps after 35,000:	20% tax

For example, someone earning 38,000 tvarps would owe 5,000 X 0,00 + 10,000 X
0.10 + 20,000 X 0.15 + 3,000 x 0.20, or 4,600 tvarps. Write a program that uses a
loop to solicit incomes and to report tax owed. The loop should terminate when
the user enters a negative number or a non-numeric input*/

#include "pch.h"
#include <iostream>

using namespace std;

const int taxTypes = 4;

const double tvarpCount[taxTypes]
{
	5000,
	10000,
	20000,
	35000,
};

const double taxMultipliers[taxTypes]
{
	0.00,
	0.10,
	0.15,
	0.20,
};

int main()
{
	double income;
	
	cout << "Please enter your income in tvarps: ";
	while (cin >> income && income >= 0)
	{
		double totalOwed = 0;
		double incomeNotAccountedFor = income;

		for (int i = 0; i < taxTypes; i++)
		{
			if (i == taxTypes - 1) // We're at the last point, and should therefore handle "Anything above x" tax type
			{
				totalOwed += incomeNotAccountedFor * taxMultipliers[i];
				incomeNotAccountedFor = 0;
			}
			else if(incomeNotAccountedFor < tvarpCount[i])
			{
				totalOwed += incomeNotAccountedFor * taxMultipliers[i];
				incomeNotAccountedFor -= incomeNotAccountedFor;
			}
			else
			{
				totalOwed += tvarpCount[i] * taxMultipliers[i];
				incomeNotAccountedFor -= tvarpCount[i];
			}			
		}		

		cout << "You owe " << totalOwed << " in tvarp taxes!" << endl;
		cout << "Please enter your income in tvarps: ";
	}

	cout << "Bye!";
}