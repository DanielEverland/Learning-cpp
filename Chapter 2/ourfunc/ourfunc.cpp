// ourfunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void simon(int);

int main()
{
	using namespace std;

	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}
void simon(int n)
{
	using namespace std;

	cout << "Simon says touch your toes " << n << " times." << endl;
}