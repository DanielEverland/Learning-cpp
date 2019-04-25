/* ProgrammingExercise06.cpp
Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the num-
ber of contributors and then solicit the user to enter the name and contribution of
each contributor. The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.

After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more. This list should
be headed by the label Grand Patrons. After that, the program should list the
remaining donors. That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word "none." Aside from displaying
two categories, the program need do no sorting.*/

#include "pch.h"
#include <iostream>

using namespace std;

const int strsize = 50;
const double grandPatronsMinAmount = 10000;

struct Contributor
{
	char name[strsize];
	double amount;
};

void displayMember(const Contributor* contributor);

int main()
{
	int contributorAmount;

	cout << "How many contributors? ";
	cin >> contributorAmount;
	cout << endl;

	Contributor* allContributors = new Contributor[contributorAmount];
	for (int i = 0; i < contributorAmount; i++)
	{
		cout << "Enter name of #" << i + 1 << ": ";
		cin.get();
		cin.getline(allContributors[i].name, strsize);

		cout << "Enter contribution amount of " << allContributors[i].name << ": ";
		cin >> allContributors[i].amount;
		cout << endl;
	}

	cout << "-----Grand Patrons-----" << endl;
	int contributorsDisplayed = 0;
	for (int i = 0; i < contributorAmount; i++)
	{
		if (allContributors[i].amount >= grandPatronsMinAmount)
		{
			displayMember(&allContributors[i]);
			contributorsDisplayed++;
		}
	}

	cout << endl;

	if (contributorsDisplayed == 0)
		cout << "none";

	cout << "-----Poor Fucking Losers-----" << endl;
	contributorsDisplayed = 0;
	for (int i = 0; i < contributorAmount; i++)
	{
		if (allContributors[i].amount < grandPatronsMinAmount)
		{
			displayMember(&allContributors[i]);
			contributorsDisplayed++;
		}
	}

	if (contributorsDisplayed == 0)
		cout << "none";
}
void displayMember(const Contributor* contributor)
{
	cout << contributor->name << ": $" << contributor->amount << endl;
}