// textin2.cpp -- using cin.get(char)

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);		// Use the cin.get(ch) function

	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);	// use it again
	}

	cout << endl << count << " characters read\n";
}