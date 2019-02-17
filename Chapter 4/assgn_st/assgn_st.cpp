// assgn_st.cpp -- assigning structures

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

	inflatable bouquet =
	{
		"sunflowers",
		0.20f,
		12.49,
	};

	inflatable choice;

	cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;

	choice = bouquet;	// Assign one structure to another

	cout << "choice: " << choice.name << " for $" << choice.price << endl;
}