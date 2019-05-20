
#include <iostream>
#include "golf.h"

using std::cout;
using std::cin;
using std::endl;

void setgolf(golf& g, const char* name, int hc)
{
	for (int i = 0; i < Len; i++)
		g.fullname[i] = name[i];

	g.handicap = hc;
}
int setgolf(golf& g)
{
	cout << "Please input name: ";
	cin.getline(g.fullname, Len);

	cout << "Please enter handicap: ";
	cin >> g.handicap;

	return g.fullname[0] != '\0';
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf& g)
{
	cout << g.fullname << " has a handicap of " << g.handicap << endl;
}