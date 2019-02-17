// structur.cpp -- a simple structure

#include "pch.h"
#include <iostream>

struct inflatable	// structure declaration
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;

	inflatable guest
	{
		"Glorious Gloria",	// name value
		1.88f,				// volume value
		29.99,				// price value
	};	// guest is structure variable of type inflatable
	// It's initialized to the indicated values

	inflatable pal =
	{
		"Audacious Arthur",
		3.12f,
		32.99,
	};	// pal is a second variable of type inflatable
	
	cout << "Expand your guest list with " << guest.name << " and " << pal.name << endl;
	// pal.name is the name member of the pal variable
	cout << "You can have both for $" << guest.price + pal.price << "!\n";
}