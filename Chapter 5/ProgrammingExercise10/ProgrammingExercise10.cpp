// Write a program using nested loops that asks the user to enter a value for the number of rows to display.
// It should then display that many rows of asterisks, with one asterisk in the first row, two in the second, and so on.
// For each row, the aserisks are preceeded by the number of periods neeeded to make all the rows display a total number characters equal to the number of rows.

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numberOfRows;

	cout << "Enter number of rows: ";
	cin >> numberOfRows;

	for (int y = 0; y < numberOfRows; y++)
	{
		for (int i = 1; i < numberOfRows - y; i++)
		{
			cout << ".";
		}
		for (int i = 0; i <= y; i++)
		{
			cout << "*";
		}

		cout << endl;
	}
}