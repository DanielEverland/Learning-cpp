/* ProgrammingExercise09.cpp 
Do Programming Exercise 6 but modify it to get information from a file. The first
item in the file should be the number of contributors, and the rest of the file should
consist of pairs of lines, with the first line of each pair being a contributor's name
and the second line being a contribution. That is, the file should look like this:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000*/

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int strsize = 50;

struct Contributor
{
	char name[strsize];
	double amount;
};

const double grandPatronsMinAmount = 10000;
const char fileToOpen[] = "C:/text.txt";
Contributor* allContributors;
int contributorAmount;

void readFile();
void displayMembers();
void displayMember(const Contributor* contributor);

int main()
{
	readFile();
	displayMembers();
}
void displayMembers()
{
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
void readFile()
{
	ifstream inStream;
	inStream.open(fileToOpen);

	if (!inStream.is_open())
	{
		cout << "Could not open the file " << fileToOpen << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	inStream >> contributorAmount;
	inStream.get();

	allContributors = new Contributor[contributorAmount];

	for (int i = 0; i < contributorAmount; i++)
	{
		inStream.getline(allContributors[i].name, strsize);

		inStream >> allContributors[i].amount;
		inStream.get();
	}
}
void displayMember(const Contributor* contributor)
{
	cout << contributor->name << ": $" << contributor->amount << endl;
}