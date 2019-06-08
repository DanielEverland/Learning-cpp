#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

void Person::Show() const
{
	cout << firstName << " " << lastName;
}