// ChapterReview13.cpp -- Write a code fragment that asks the user to enter a positive integer and then creates a dynamic array of that many ints.
// Do this by using new, then again using a vector object.

#include "pch.h"
#include <iostream>
#include <vector>

int main()
{
	int count;

	std::cout << "How long should the array be?";
	std::cin >> count;

	int* dynamicArray = new int[count];
	std::vector<int> vectorObject(count);
}