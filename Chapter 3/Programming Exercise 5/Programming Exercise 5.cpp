// Write a program that requests the user to enter the current world population and the current popoulation of the U.S.
// Store the information in variable of type long long.
// Have the program display the percent that the U.S. population is of the world's population.

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	long long worldPopulation = 0;
	long long nationPopulation = 0;

	cout << "Enter the world's population: ";
	cin >> worldPopulation;

	cout << "Enter the population of your nation: ";
	cin >> nationPopulation;

	double percentage = (double)nationPopulation / worldPopulation;

	cout << "The population of your nation is ";
	cout << percentage * 100;
	cout << "% of the world population";
}