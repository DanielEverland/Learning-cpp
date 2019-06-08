#pragma once

#include "Person.h"

class PokerPlayer : public virtual Person
{
public:
	PokerPlayer(string firstName, string lastName) : Person(firstName, lastName) { }
	PokerPlayer(const Person& person) : Person(person) { }

	int Draw() const;
	virtual void Show() const;
};