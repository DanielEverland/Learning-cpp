/* ProgrammingExercise09.cpp
Do Programming Exercise 06, but instead of declaring an array of three CandyBar structures, use new to allocate the array dynamically.
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
	CandyBar* pointer = new CandyBar[3]
	{
		{ "Bounty", 43.5, 12 },
		{ "Snickers", 2, 1500 },
		{ "Twix", 1503401.2434, 6969 },
	};
	
	cout << "The first snack is a " << pointer[0].Brand << " snack, it weighs " << pointer[0].Weight << " pounds and contains " << pointer[0].Calories << " calories" << endl;
	cout << "The second snack is a " << pointer[1].Brand << " snack, it weighs " << pointer[1].Weight << " pounds and contains " << pointer[1].Calories << " calories" << endl;
	cout << "The third snack is a " << pointer[2].Brand << " snack, it weighs " << pointer[2].Weight << " pounds and contains " << pointer[2].Calories << " calories" << endl;
}