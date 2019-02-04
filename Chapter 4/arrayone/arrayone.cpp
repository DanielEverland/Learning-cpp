// arrayone.cpp -- small arrays of integers

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	int yams[3];	// Creates array with three elements.
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamCosts[3] = { 20, 30, 5 }; // create, intialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamCosts[1] << " cents per yam." << endl;
	
	int total = yams[0] * yamCosts[0] + yams[1] * yamCosts[1] + yams[2] * yamCosts[2];
	cout << "The total yam expense is " << total << " cents." << endl;
	
	cout << endl;
	cout << "Size of yams array = " << sizeof(yams);
	cout << " bytes." << endl;
	cout << "Size of one element = " << sizeof(int);
	cout << " bytes." << endl;
}