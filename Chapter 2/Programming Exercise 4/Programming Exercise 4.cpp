// Programming Exercise 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void DisplayAgeInMonths(int);

int main()
{
	cout << "How old are you years?\n";

	int years;
	cin >> years;

	DisplayAgeInMonths(years);
}
void DisplayAgeInMonths(int years)
{
	cout << "That's " << years * 12 << " months!";
}