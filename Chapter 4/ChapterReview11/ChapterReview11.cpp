// ChapterReview11.cpp -- Suppose ted is a double variable. Declare a pointer that points to ted and use the pointer to display ted's value

#include "pch.h"
#include <iostream>

int main()
{
	double ted;
	double* tedPointer = &ted;
	
	std::cout << *tedPointer << std::endl;
}