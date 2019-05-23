// ProgrammingExercise02.cpp

#include <iostream>
#include "Person.h"

int main()
{
	Person one;
	Person two("Smythcraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	two.FormalShow();
	three.FormalShow();
}