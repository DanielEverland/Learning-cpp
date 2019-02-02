// Write a program that asks how many miles you have driven and how many gallons of gasoline you have used and then reports the miles per gallon your car has gotten.

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	int milesDriven = 0;
	int gallonsUsed = 0;

	cout << "How many miles have you driven?";
	cin >> milesDriven;

	cout << "How many gallons have you used?";
	cin >> gallonsUsed;

	float milesPerGallon = (float)milesDriven / gallonsUsed;

	cout << "Your car uses ";
	cout << milesPerGallon;
	cout << " MPG";
}