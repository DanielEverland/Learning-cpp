/* ProgrammingExercise08.cpp
Write a program that opens a text file, reads it character-by-character to the end of
the file, and reports the number of characters in the file.*/

#include "pch.h"
#include <iostream>
#include <fstream>

const char fileToOpen[] = "C:/text.txt";

using namespace std;

int main()
{
	ifstream inStream;
	inStream.open(fileToOpen);

	if (!inStream.is_open())
	{
		cout << "Could not open the file " << fileToOpen << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	int chars = 0;
	char ch;
	while (inStream.get(ch))
		chars++;

	cout << "Total chars: " << chars;
}