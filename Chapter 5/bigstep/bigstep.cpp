// bigstep.cpp -- count as directed

#include "pch.h"
#include <iostream>

int main()
{
	using std::cout; // A using declaration
	using std::cin;
	using std::endl;

	cout << "Enter an integer ";

	int by;
	cin >> by;

	cout << "Counting by " << by << "s:\n";

	for (int i = 0; i < 100; i += by)
	{
		cout << i << endl;
	}
}