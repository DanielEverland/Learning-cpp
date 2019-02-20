/* ProgrammingExercise10.cpp
Write a program that requests the user to enter three times for the 40-yd dash and then displays the times and the average.
Use an array object to hold the data
*/

#include "pch.h"
#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<float, 3> dashValues;

	cout << "Please enter your first value: ";
	cin >> dashValues[0];

	cout << "Please enter your second value: ";
	cin >> dashValues[1];

	cout << "Please enter your third value: ";
	cin >> dashValues[2];

	float average = (dashValues[0] + dashValues[1] + dashValues[2]) / 3;

	cout << "First: " << dashValues[0] << ", second: " << dashValues[1] << ", third: " << dashValues[2] << ", average: " << average;
}