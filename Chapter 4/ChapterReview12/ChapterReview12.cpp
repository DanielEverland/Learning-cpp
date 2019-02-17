// ChapterReview12.cpp -- Suppose treacle is an array of 10 floats. Declare a pointer that points to the first element of treacle
// and use the pointer to display the first and last elements of the array

#include "pch.h"
#include <iostream>

int main()
{
	float treacle[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	float* pointer = treacle;

	std::cout << "First: " << pointer[0] << ", Last: " << *(pointer + 9);
}