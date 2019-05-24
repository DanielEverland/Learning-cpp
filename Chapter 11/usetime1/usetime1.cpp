// usetime1.cpp -- using the second draft of the Time class

#include <iostream>
#include "mytime1.h"

int main()
{
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	// operator notation
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	Time moreFixing(3, 38);
	cout << "more fixing time = ";
	moreFixing.Show();
	cout << endl;
	total = moreFixing.operator+(total);
	// function notation
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;
}