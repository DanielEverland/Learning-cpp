#include <iostream>
#include <random>
#include "Gunslinger.h"

using std::cout;
using std::endl;

double Gunslinger::Draw() const
{
	return (rand() % 1000) / 1000.0;
}

void Gunslinger::Show() const
{
	Person::Show();
	cout << "'s notches: " << gunNotches << endl;
	cout << "Drew: " << Gunslinger::Draw();
}