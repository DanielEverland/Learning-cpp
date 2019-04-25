/* ProgrammingExercise07.cpp
Write a program that reads input a word at a time until a lone q is entered. The
program should then report the number of words that began with vowels, the num-
ber that began with consonants, and the number that fit neither of those categories.

One approach is to use isalpha() to discriminate between words beginning with
letters and those that don't and then use an if or switch statement to further iden-
tify those passing the isalpha() test that begin with vowels. A sample run might
look like this: See book*/

#include "pch.h"
#include <iostream>
#include <cctype>

bool isVowel(char ch);
bool isConsonant(char ch);

const int strsize = 50;

using namespace std;

int main()
{
	cout << "Enter text and exist with q" << endl;

	int vowels = 0;
	int consonants = 0;
	int remaining = 0;

	char word[strsize];
	while (cin >> word && word[0] != 'q')
	{
		if (isVowel(word[0]))
		{
			vowels++;
		}
		else if (isConsonant(word[0]))
		{
			consonants++;
		}
		else
		{
			remaining++;
		}
	}

	cout << "Vowels: " << vowels << ", consonants: " << consonants << ", other: " << remaining << endl;
}

bool isVowel(char ch)
{
	return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'y' || ch == 'Y';
}
bool isConsonant(char ch)
{
	return !isVowel(ch) && isalpha(ch);
}