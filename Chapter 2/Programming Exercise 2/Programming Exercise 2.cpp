// Programming Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int FurlongsToYards(int furlongs);

int main()
{
	cout << "Hey kid, give me a distance in furlongs\n";
	int furlongs;
	cin >> furlongs;

	cout << "Damn kid, that's " << FurlongsToYards(furlongs) << " yards";
}
int FurlongsToYards(int furlongs)
{
	return furlongs * 220;
}