// arraynew.cpp -- using hte new operator for arrays.

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	double* p3 = new double[3];	// Space for 3 doubles.
	p3[0] = 0.2;				// Treat p3 like an array name.
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;	// Increment the pointer.

	cout << "Now p3[0] is " << p3[0] << " and p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;	// Point back to beginning.
	
	delete[] p3;	// Free the memory.
}