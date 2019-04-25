/* ProgrammingExercise01.cpp
Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don't forget the cctype family.)*/

#include "pch.h"
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	while (cin.get(ch) && ch != '@')
	{
		if (!isdigit(ch))
		{
			if (islower(ch))
				cout << char(toupper(ch)) << endl;
			else if (isupper(ch))
				cout << char(tolower(ch)) << endl;
		}		
	}
}