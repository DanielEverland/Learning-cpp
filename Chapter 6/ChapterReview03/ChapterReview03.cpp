// ChapterReview03.cpp -- consider the following program:

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	char ch;
	int ct1, ct2;

	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$')
	{
		cout << ch;
		ct1++;
		if (ch = '$')
			ct2++;
		cout << ch;
	}

	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
}

// Suppose you provide the following input, pressing Enter key at the end of each line:
// Hi!
// Send $10 or $20 now!
//
// What is the file output? (Recall that input is buffered.)

// H$i$!
// $S$e$n$d$ $ct1 = 9, ct2 = 9