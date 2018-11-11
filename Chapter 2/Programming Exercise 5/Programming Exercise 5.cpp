// Programming Exercise 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int CelsiusToFahrenheit(int);

int main()
{
	cout << "Please enter a Celsius value: ";

	int celsius;
	cin >> celsius;

	int fahrenheit = CelsiusToFahrenheit(celsius);

	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";
}
int CelsiusToFahrenheit(int celsius)
{
	return celsius * 1.8 + 32;
}