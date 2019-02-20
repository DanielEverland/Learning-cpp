/* ProgrammingExercise05.cpp 
The CandyBar structure contains three members.
The first member holds the brand name of a candy bar.
The second member hold the weight (which may have a fractional part) of the candy bar
The third member holds the number of calories (an integer value) in the candy bar

Write a program that declares such a structure and creates a CandyBar variable called snack,
initializing its members to "Mocha Munch", 2.3 and 350, respectively. The initialization should be part of the declaration for snack.

Finally, the program should display the contents of the snack variable.
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
	CandyBar snack{ "Mocha Munch", 2.3, 350 };

	cout << "The snack is a " << snack.Brand << " snack, it weighs " << snack.Weight << " pounds and contains " << snack.Calories << " calories";
}