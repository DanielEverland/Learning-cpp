// convert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int stonetolb(int);

int main()
{
	using namespace std;

	int stone;
	cout << "Enter the weight in stones: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds. " << endl;
	return 0;
}
int stonetolb(int stone)
{
	return 14 * stone;
}