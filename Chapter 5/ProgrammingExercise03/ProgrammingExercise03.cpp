// ProgrammingExercise03.cpp -- Write a program that asks the user to type in numbers. After each entry, the program should report the cumulative
// sum of the entires to date. The program should terminate when the user enters 0.

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int entry, sum = 0;

	cout << "Please enter numbers. Terminate using 0" << endl;

	do
	{
		cin >> entry;

		sum += entry;

		cout << "The current sum is " << sum << endl;
	}
	while (entry != 0);
}