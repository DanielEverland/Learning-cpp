// ChapterReview06.cpp -- Write a for loop that prints the values 1 2 4 8 16 32 64 by increasing the value of a counting variable by a factor of two in each cycle

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	for (; i <= 64; i *= 2)
		cout << i << " ";
}