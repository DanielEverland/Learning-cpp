// Programming Exercise 2.cpp -- Write a short program that asks for your height in feet and inches and your weight in pounds.
// Use three variables to store the information
// Have the program report your body mass index (BMI).
// To calculate the BMI, first convert your height in feet and inches to your height in inches (1 foot = 12 inches).
// Then convert your weight in pounds into your mass in kilograms by dividing by 2.2.
// Finally, compare your BMI by dividing your mass in kilograms by the square of your height in meters.
// Use symbolic constants to represent the various conversion factors.

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int FEET_TO_INCHES = 12;
	const float POUNDS_IN_KILOGRAM = 2.2f;
	const float INCHES_IN_METER = 39.3700787f;
	int feet, inches, pounds;

	cout << "Hello! What's your height in feet?" << endl;
	cin >> feet;
	cout << "And the remainding inches?" << endl;
	cin >> inches;
	cout << "How much do you weigh in pounds?" << endl;
	cin >> pounds;

	int totalInches = feet * FEET_TO_INCHES + inches;
	float totalMeters = totalInches / INCHES_IN_METER;
	int kilograms = pounds / POUNDS_IN_KILOGRAM;

	float BMI = kilograms / pow(totalMeters, 2);

	cout << "Your BMI is " << int(BMI);

	if (BMI > 25)
		cout << "... yikes. Better hit the treadmill, fatass";
}