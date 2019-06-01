#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);

	label = new char[strlen(s2) + 1];
	strcpy(label, s2);

	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);

	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
}

Cd& Cd::operator=(const Cd& d)
{
	delete[] performers;
	delete[] label;

	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);

	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

void Cd::Report() const
{
	using namespace std;

	cout << label << " by " << performers << endl;
	cout << selections << " songs, " << playtime << " playtime" << endl;
}