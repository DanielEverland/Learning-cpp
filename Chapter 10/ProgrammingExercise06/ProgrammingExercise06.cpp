// ProgrammingExercise06.cpp

#include <iostream>
#include "Move.h"

int main()
{
	Move a(1, 2);	
	a.showmove();

	Move b = a.add(a);
	b.showmove();

	a.reset();
	a.showmove();
}