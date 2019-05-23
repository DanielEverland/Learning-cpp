// ProgrammingExercise04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales.h"

using namespace SALES;

int main()
{
	double firstSales[2]
	{
		25,
		230.54,
	};
	Sales first(firstSales, 2);
	Sales second;

	first.showSales();
	second.showSales();
}