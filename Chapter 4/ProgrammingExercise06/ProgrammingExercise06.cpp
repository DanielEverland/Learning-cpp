/* ProgrammingExercise06.cpp 
The CandyBar structure contains three members, as described in Programming Exercise 05.

Write a program that creates an array of three CandyBar structures, initializing them to values of your choice,
and then displays the contents of each structure
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string Brand;
	double Weight;
	int Calories;
};
int main()
{
	CandyBar candyArray[3]
	{
		{ "Bounty", 43.5, 12 },
		{ "Snickers", 2, 1500 },
		{ "Twix", 1503401.2434, 6969 },
	};

	cout << "The first snack is a " << candyArray[0].Brand << " snack, it weighs " << candyArray[0].Weight << " pounds and contains " << candyArray[0].Calories << " calories" << endl;
	cout << "The second snack is a " << candyArray[1].Brand << " snack, it weighs " << candyArray[1].Weight << " pounds and contains " << candyArray[1].Calories << " calories" << endl;
	cout << "The third snack is a " << candyArray[2].Brand << " snack, it weighs " << candyArray[2].Weight << " pounds and contains " << candyArray[2].Calories << " calories" << endl;
}