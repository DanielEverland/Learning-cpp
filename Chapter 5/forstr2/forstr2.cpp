// forstr2.cpp -- reversing an array

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int j, i;
	for (j = 0, i = word.size(); j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << "\nDone\n";
}