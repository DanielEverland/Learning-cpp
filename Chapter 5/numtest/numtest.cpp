// numtest.cpp -- use numeric test in for loop

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the starting countdown value: ";

	int limit;
	cin >> limit;

	int i;
	for (i = limit; i; i--) // Quits when i is 0
		cout << "i = " << i << "\n";

	cout << "Done now that i = " << i;
}