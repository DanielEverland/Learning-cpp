// ChapterReview15.cpp -- Write a code fragment that dynamically allocates a structure of the type described in Question 8
// and then reads a value for the kind member of the structure

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
	fish* dynFish = new fish;
	dynFish->type = "fuck";
	
	std::cout << dynFish->type << std::endl;
}