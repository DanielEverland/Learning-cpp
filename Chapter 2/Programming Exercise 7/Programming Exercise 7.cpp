// Programming Exercise 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void DisplayHoursAndMinutes(int, int);

int main()
{
	cout << "Enter hours: ";
	int hours;
	cin >> hours;

	cout << "Enter minutes: ";
	int minutes;
	cin >> minutes;
	
	DisplayHoursAndMinutes(hours, minutes);
}
void DisplayHoursAndMinutes(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes;
}