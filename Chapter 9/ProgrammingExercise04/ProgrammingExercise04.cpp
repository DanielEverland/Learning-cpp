// ProgrammingExercise04.cpp

#include "sales.h"

using namespace SALES;

const double fixedSales[QUARTERS]
{
	100,
	250,
	3000,
	6,
};

int main()
{
	Sales s1;
	Sales s2;

	setSales(s1);
	showSales(s1);

	setSales(s2, fixedSales, QUARTERS);
	showSales(s2);

	setSales(s2, fixedSales, 2);
	showSales(s2);
}