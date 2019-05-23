// ProgrammingExercise05.cpp

#include <iostream>
#include "Stack.h"

int main()
{
	customer a
	{
		"First Customer",
		100,
	};

	customer b
	{
		"Second Customer",
		1000,
	};

	Stack stack;

	stack.push(a);
	stack.push(a);
	stack.pop(a);
	stack.push(b);
	stack.push(b);
	stack.pop(a);
	stack.pop(b);
}