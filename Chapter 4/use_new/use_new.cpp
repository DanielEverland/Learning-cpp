// use_new.cpp -- using the new operator

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	int nights = 1001;
	int* pt = new int;	// Allocate space for an int
	*pt = 1001;			// Store a value there

	cout << "nights value = " << nights << ": location " << &nights << endl;
	cout << "int value = " << *pt << ": location = " << pt << endl;

	double* pd = new double;	// Allocate space for a double
	*pd = 100000001.0;			// Store a double there

	cout << "double value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;
}