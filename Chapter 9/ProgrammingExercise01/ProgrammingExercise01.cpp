// ProgrammingExercise01.cpp

#include "golf.h"

int main()
{
	golf g1;
	setgolf(g1, "First Name", 69);

	showgolf(g1);
	handicap(g1, 420);
	showgolf(g1);

	golf g2;
	setgolf(g2);
	showgolf(g2);
}