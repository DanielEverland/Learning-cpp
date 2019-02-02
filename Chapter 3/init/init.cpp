// init.cpp -- type changes on initialization
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	float tree = 3;		// int converted to float.
	int guess(3.9832);	// double converted to int.
	int debt = 7.2e12;	// Result not defined in C++
	
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
}