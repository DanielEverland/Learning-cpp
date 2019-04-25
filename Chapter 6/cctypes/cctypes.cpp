// cctypes.cpp -- using the ctype.h library

#include "pch.h"
#include <iostream>
#include <cctype>

int main()
{
	using namespace std;

	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);				// get first character
	while (ch != '@')
	{
		if (isalpha(ch))		// is alphabetic character?
			chars++;
		else if (isspace(ch))	// is it whitespace character?
			whitespace++;
		else if (isdigit(ch))	// is it a digit?
			digits++;
		else if (ispunct(ch))	// is it punctuation?
			punct++;
		else
			others++;

		cin.get(ch);	// Get the next character
	}

	cout	<< chars << " letters, "
			<< whitespace << " whitespace, "
			<< digits << " digits, "
			<< punct << " punctuation, "
			<< others << " others.\n";
}