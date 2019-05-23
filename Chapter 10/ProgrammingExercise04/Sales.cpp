#include <iostream>
#include "Sales.h"

namespace SALES
{
	using namespace std;

	Sales::Sales(const double ar[], int n)
	{
		double total = 0;

		for (int i = 0; i < (n < QUARTERS ? n : QUARTERS); i++)
		{
			total += ar[i];
			sales[i] = ar[i];

			if (i == 0 || ar[i] > max)
				max = ar[i];

			if (i == 0 || ar[i] < min)
				min = ar[i];
		}

		average = total / n;
	}
	Sales::Sales()
	{
		double total = 0;

		int i = 0;
		while (i++ < QUARTERS)
		{
			cout << "Please enter a value for Q" << i << ": ";

			double value;
			if (!(cin >> value))
				break;

			total += value;
			sales[i - 1] = value;

			if (i == 0 || value > max)
				max = value;

			if (i == 0 || value < min)
				min = value;
		}

		average = total / i;
	}
	void Sales::showSales() const
	{
		cout << endl;

		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Q" << i + 1 << ": " << sales[i] << endl;
		}

		cout << "min: " << min << ", max: " << max << ", average: " << average << endl;

		cout << endl;
	}
}
