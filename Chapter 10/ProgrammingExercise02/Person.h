#pragma once
#include <string>

using namespace std;

class Person
{
public:
	Person() { lname = ""; fname[0] = '\0'; } // #1
	Person(const string& ln, const char* fn = "Heyyou"); // #2

	void Show() const;
	void FormalShow() const;
	
private:
	static const int LIMIT = 25;
	string lname;		// person's last name
	char fname[LIMIT];	// person's first name
};

