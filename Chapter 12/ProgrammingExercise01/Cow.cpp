#include <iostream>
#include <cstring>
#include "Cow.h"

Cow::Cow()
{
	hobby = nullptr;
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);

	if (ho != nullptr)
	{
		hobby = new	char[strlen(ho) + 1];
		strcpy(hobby, ho);
	}
	else
	{
		hobby = nullptr;
	}

	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);

	if (c.hobby != nullptr)
	{
		hobby = new	char[strlen(c.hobby) + 1];
		strcpy(hobby, c.hobby);
	}	
	else
	{
		hobby = nullptr;
	}

	weight = c.weight;
}

Cow& Cow::operator=(const Cow& c)
{
	delete[] hobby;

	strcpy(name, c.name);

	if (c.hobby != nullptr)
	{
		hobby = new	char[strlen(c.hobby) + 1];
		strcpy(hobby, c.hobby);
	}
	else
	{
		hobby = nullptr;
	}

	weight = c.weight;

	return *this;
}

Cow::~Cow()
{
	delete[] hobby;
}

void Cow::ShowCow() const
{
	using std::cout;
	using std::endl;

	cout << "Name: " << name << endl;

	if (hobby == nullptr)
		cout << "Hobby: NULL" << endl;
	else
		cout << "Hobby: " << hobby << endl;
	
	cout << "Weight: " << weight << endl;

	cout << std::endl;
}