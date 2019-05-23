#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}
golf::golf()
{
	using namespace std;

	cout << "//-------------------------------------------//" << endl;
	cout << "    Welcome to the interactive golf creator    " << endl;
	cout << "//-------------------------------------------//" << endl;

	cout << "Please enter a full name: ";
	cin.getline(this->fullname, Len);
	
	cout << "Please enter " << this->fullname << "'s handicap: ";
	cin >> this->handicap;
	cin.get();

	cout << "//-------------------------------------------//" << endl;
	cout << "THANK YOU FOR USING THE INTERACTIVE CONSTRUCTOR" << endl;
	cout << "//-------------------------------------------//" << endl;
}

void golf::show() const
{
	std::cout << fullname << "'s handicap is " << handicap << std::endl;
}
