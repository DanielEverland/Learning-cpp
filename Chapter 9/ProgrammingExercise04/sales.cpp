#include <iostream>
#include "sales.h"

using std::cout;
using std::cin;
using std::endl;

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double total = 0;

		for (int i = 0; i < QUARTERS; i++)
		{
			if (i < n)
			{
				s.sales[i] = ar[i];

				total += ar[i];

				if (ar[i] < s.min || i == 0)
					s.min = ar[i];

				if (ar[i] > s.max || i == 0)
					s.max = ar[i];
			}
			else
				s.sales[i] = 0;
		}

		s.average = total / n;
	}

	void setSales(Sales& s)
	{
		double total = 0;

		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Input sales for Q" << i + 1 << ": ";
			cin >> s.sales[i];

			total += s.sales[i];

			if (s.max < s.sales[i] || i == 0)
				s.max = s.sales[i];

			if (s.min > s.sales[i] || i == 0)
				s.min = s.sales[i];
		}

		s.average = total / QUARTERS;
	}

	void showSales(const Sales& s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Q" << i + 1 << ": " << s.sales[i] << endl;
		}

		cout << "Max: " << s.max << endl;
		cout << "Min: " << s.min << endl;
		cout << "Average: " << s.average << endl << endl;
	}
}