#include <iostream>
#include "Stock.h"

const int STKS = 4;
int main()
{
	using std::cout;
	using std::endl;

	// create an ar;ray of initialized objects
	Stock stocks[STKS] =
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5),
	};

	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
		cout << stocks[st] << endl;

	// set pointer to first element
	const Stock* top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);

	// now top points to the most valuable holding
	std::cout << "\nMost valuable holding:\n";
	cout << *top << endl;
}