// stack.cpp -- Stack member functions

#include <iostream>
#include "Stack.h"

Stack::Stack()		// create an empty stack
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	static float total;

	total += item.payment;

	std::cout << "Total is now " << total << std::endl;

	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}