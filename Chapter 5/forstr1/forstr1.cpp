// forstr1.cpp -- using for with a string

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Enter a word: ";

	string word;
	cin >> word;

	// Display letters in reverse order
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];

	cout << "\nBye.\n";
}