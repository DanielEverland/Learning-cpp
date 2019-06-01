
#include <cstring>
#include <iostream>
#include "Classic.h"

Classic::Classic(const char* primaryWork, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	this->primaryWork = new char[strlen(primaryWork) + 1];
	strcpy(this->primaryWork, primaryWork);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	primaryWork = new char[strlen(c.primaryWork) + 1];
	strcpy(primaryWork, c.primaryWork);
}

Classic::Classic() : Cd()
{
	primaryWork = nullptr;
}

Classic::~Classic()
{
	delete[] primaryWork;
}

Classic& Classic::operator = (const Classic& c)
{


	Cd::operator=(c);

	primaryWork = new char[strlen(c.primaryWork) + 1];
	strcpy(primaryWork, c.primaryWork);

	return *this;
}

void Classic::Report() const
{
	using namespace std;

	Cd::Report();

	cout << "Primary Work: " << primaryWork << endl;
}