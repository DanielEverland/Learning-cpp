// ProgrammingExercise07.cpp

#include <iostream>
#include "Plorg.h"

int main()
{
	Plorg firstPlorg("CutePlorg");
	Plorg secondPlorg("Ugly Plorg");

	firstPlorg.Show();
	secondPlorg.Show();

	firstPlorg.SetContentmentIndex(10);
	firstPlorg.Show();
}