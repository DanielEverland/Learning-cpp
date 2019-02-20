// ProgrammingExercise02.cpp -- Rewrite Listing 4.4 using C++ strings instead of char arrays

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int Size = 20;
	
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin, name);

	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);

	cout << "I have some delicious " << dessert << " for you " << name << endl;
}