// Programming Exercise 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

double LightyearToAU(double);

int main()
{
	cout << "Enter the number of lightyears: ";

	double lightyears;
	cin >> lightyears;

	double au = LightyearToAU(lightyears);

	cout << lightyears << " light years = " << au << " astronomical units.";
}
double LightyearToAU(double lightyears)
{
	return lightyears * 63240;
}