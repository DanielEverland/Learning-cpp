// instr2.cpp -- reading more than one string

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	const int ArSize = 20;

	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter you name:\n";
	cin.getline(name, ArSize);	// Reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
}