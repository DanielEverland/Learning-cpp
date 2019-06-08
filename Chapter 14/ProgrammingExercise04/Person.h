#pragma once

#include <string>

using std::string;

class Person
{
public:
	Person() { firstName = "N/A"; lastName = "N/A"; }
	Person(string firstName, string lastName) : firstName(firstName), lastName(lastName) { }
	
	void SetFirstName(string firstName) { this->firstName = firstName; }
	string GetFirstName() const { return firstName; }

	void SetLastName(string lastName) { this->lastName = lastName; }
	string GetLastName() const { return lastName; }


	virtual void Show() const;

private:
	string firstName;
	string lastName;
};