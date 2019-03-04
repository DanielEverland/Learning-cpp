// formore.cpp -- more looping with for

#include "pch.h"
#include <iostream>

const int ArSize = 16;	// example of external declaration
int main()
{
	long long factorials[ArSize];

	factorials[0] = factorials[1] = 1;

	for (int i = 1; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
}