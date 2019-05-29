// ProgrammingExercise01.cpp

#include <iostream>
#include "Cow.h"

int main()
{
	Cow firstCow;
	Cow secondCow("I'M A COW", "GOING MIAW", 10000);
	Cow thirdCow(firstCow);

	firstCow.ShowCow();
	secondCow.ShowCow();
	thirdCow.ShowCow();

	std::cout << std::endl;
	std::cout << std::endl;

	firstCow = Cow("First Cow", "My Hobby", 50);
	thirdCow = secondCow;

	firstCow.ShowCow();
	secondCow.ShowCow();
	thirdCow.ShowCow();
}