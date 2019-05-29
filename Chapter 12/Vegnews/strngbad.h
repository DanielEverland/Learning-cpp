// strngbad.h -- flawed string class definition
#include <iostream>
#ifndef STRNGBAD_H_

class StringBad
{
public:
	StringBad(const char* s);	// constructor
	StringBad();				// default constructor
	~StringBad();				// destructor

	// friend function
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);

private:
	char* str;					// pointer to string
	int len;					// length of string
	static int num_strings;		// number of objects
};

#endif
