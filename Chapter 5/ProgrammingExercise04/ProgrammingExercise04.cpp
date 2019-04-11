/* ProgrammingExercise04.cpp

Daphne invests $100 at 10% simple interest. That is, every year, the investment earns 10% of the original investment, or $10 each and every year

	interest = 0.10 X original balance

At the same time, Cleo invests $100 at 5% compount interest. That is, interest 5% of the current balance, including previous additions of interest:

	interest = 0.05 X current balance

Cleo earns 5% of $100 the first year, giving her $105. The next year she earns 5% of €105, or €5.25, and so on.
Write a program that finds how many years it takes for the value of Cleo's investment to exceed the value of Daphne's investment and
	then display the value of both investments at that time
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double daphneInitial = 100;
	double daphneCurrent = 100;
	double daphneInterest = 0.10;

	double cleoInitial = 100;
	double cleoCurrent = 100;
	double cleoInterest = 0.05;

	int yearsProgressed = 0;
	while (cleoCurrent <= daphneCurrent)
	{
		daphneCurrent += daphneInitial * daphneInterest;
		cleoCurrent += cleoCurrent * cleoInterest;

		cout << "Year " << yearsProgressed << " = Daphne: " << daphneCurrent << ", Cleo: " << cleoCurrent << endl;

		yearsProgressed++;
	}

	cout << "It took " << yearsProgressed << " for Cleo's investment to exceed Daphne's" << endl;
	cout << "Cleo: " << cleoCurrent << ", Daphne: " << daphneCurrent;
}