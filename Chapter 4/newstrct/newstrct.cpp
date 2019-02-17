// newstrct.cpp -- using new with a structure

#include "pch.h"
#include <iostream>

struct inflatable 
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;

	inflatable* ps = new inflatable;	// Allot memory for structures
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);				// Method 1 for member access

	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;				// Method 2 for member access

	cout << "Enter price: $";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl;					// Method 2
	cout << "Volume: " << ps->volume << " cubic feet\n";	// Method 1
	cout << "Price: $" << ps->price << endl;				// Method 1

	delete ps;	// Free memory used by structures
}