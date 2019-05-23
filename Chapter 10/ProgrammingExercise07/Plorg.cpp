#include <cstring>
#include <iostream>
#include "Plorg.h"

Plorg::Plorg(const char name[])
{
	for (int i = 0; i < NameLen; i++)
	{
		this->name[i] = name[i];
		
		if (name[i] == '\0')
			break;
	}
}

void Plorg::SetContentmentIndex(int n)
{
	contentmentIndex = n;
}

void Plorg::Show()
{
	using namespace std;

	cout << name << "'s CI is " << contentmentIndex << endl;
}
