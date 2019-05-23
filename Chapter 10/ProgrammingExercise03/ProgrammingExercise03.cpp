// ProgrammingExercise03.cpp

#include <iostream>
#include "golf.h"

int main()
{
	golf coolboi("Daniel Everland", 5);
	golf opponent;

	std::cout << std::endl << std::endl;

	coolboi.show();
	opponent.show();
}