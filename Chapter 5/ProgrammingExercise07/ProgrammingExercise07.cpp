/* ProgrammingExercise07.cpp 

Design a structure called car that holds the following information about an automobile
 - its make, as a string in a character array or in a string object
 - the year it was built, as an int

 Write a program that asks the user how many cars to catalog.
 The program should then use new to create a dynamic array of that many car structures.
 Next, it should then prompt the user to input the make (which might consist of more than one word) and the year for each structure.
 Note that this requires some care because it alternates reading string with numeric data (see Chapter 4).
 Finally, it should display the contents of each structure.

 */

#include "pch.h"
#include <iostream>

using namespace std;

const int MaxMakeSize = 20;

struct Car
{
	char* make;
	int year;
};
int main()
{
	int carsToCatalog = 0;

	cout << "How many cars should we catalog? ";
	cin >> carsToCatalog;

	Car* cars = new Car[carsToCatalog];

	for (int i = 0; i < carsToCatalog; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		
		char* charOutput = new char[MaxMakeSize];				
		cout << "Please enter the make: ";

		// Skip newline
		cin.get();

		cin.getline(charOutput, MaxMakeSize);
		cars[i].make = charOutput;

		cout << "Please enter the year made: ";
		cin >> cars[i].year;
	}

	cout << "Here is your collection:" << endl;
	for (int i = 0; i < carsToCatalog; i++)
	{
		cout << cars[i].year << " " << cars[i].make << endl;
	}
}