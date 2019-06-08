#pragma once

#include "Person.h"

class Gunslinger : public virtual Person
{
public:
	Gunslinger(string firstName, string lastName, int gunNotches) : Person(firstName, lastName), gunNotches(gunNotches) { }
	Gunslinger(const Person& person, int gunNotches) : Person(person), gunNotches(gunNotches) { }

	void SetGunNotches(int gunNotches) { this->gunNotches = gunNotches; }
	int GetGunNotches() const { return gunNotches; }

	double Draw() const;
	virtual void Show() const;

private:
	int gunNotches;
};