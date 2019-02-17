// ChapterReview09.cpp -- Declare a variable of the type defined in question 8 and initialize it

#include "pch.h"
#include <iostream>
#include <string>

struct fish {
	std::string type;
	int weightInOunces;
	float lengthInInches;
};
int main()
{
	fish salmon{ "Salmon", 100, 5.05 };
}