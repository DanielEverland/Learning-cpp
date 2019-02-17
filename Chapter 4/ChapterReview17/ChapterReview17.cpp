// ChapterReview17.cpp -- Declare a vector object of 10 string objects and an array object of 10 string objects.
// Show the necessary header files and don't use string. Do use a const for the number of strings

#include "pch.h"
#include <iostream>
#include <vector>
#include <array>

using namespace std;

const int length = 10;

int main()
{
	vector<std::string> vectorObject = vector<std::string>(length);
	array<std::string, length> arrayObject;
}