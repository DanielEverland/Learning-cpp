#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';

	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
}

Cd& Cd::operator=(const Cd& d)
{
	strcpy(performers, d.performers);
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