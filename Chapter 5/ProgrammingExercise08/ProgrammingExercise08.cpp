// Write a program that uses an array of char and a loop to read one word at a time until the word done is entered.
// The program should then report the number of words entered (not counting done).

#include "pch.h"
#include <iostream>

using namespace std;

const int BufferSize = 100;

int main()
{
	cout << "Enter words (to stop, type the word done):\n";

	int wordsCounted = 0;

	char input[BufferSize];

	// Clear buffer
	cin.get();

	do
	{
		wordsCounted++;

		cin >> input;

	} while (strcmp(input, "done"));

	cout << "You entered a total of " << (wordsCounted - 1) << " words.";
}