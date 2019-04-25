// ChapterReview09.cpp -- Rewrite this code without using break or continue

#include "pch.h"
#include <iostream>

using namespace std;

// Before
int main()
{
	int line = 0;
	char ch;
	while (cin.get(ch))
	{
		if (ch == 'Q')
			break;
		if (ch != '\n')
			continue;
		line++;
	}
}

// After
int main()
{
	int line = 0;
	char ch;
	cin.get(ch);

	while (ch != 'Q')
	{
		if (ch == '\n')
			line++;

		cin.get(ch);
	}
}