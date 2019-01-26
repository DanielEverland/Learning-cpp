// hexoct2.cpp -- display value in hex and octal

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;

	cout << "chest = " << chest << " (decimal for 42)" << endl;

	cout << hex;	// Manipulator for changing number base.
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;

	cout << oct;	// Manipulator for changing number base.
	cout << "inseam = " << inseam << " (octadecimal for 42)" << endl;
}
