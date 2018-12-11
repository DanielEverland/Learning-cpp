// limits.cpp -- some integer limits
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operator yields the size of the type or of variable
	cout << "short is "		<< sizeof n_short * CHAR_BIT	<< " bits." << endl;
	cout << "int is "		<< sizeof(int) * CHAR_BIT		<< " bits." << endl;
	cout << "long is "		<< sizeof n_long * CHAR_BIT		<< " bits." << endl;
	cout << "long long is " << sizeof n_llong * CHAR_BIT	<< " bits." << endl;

	cout << endl;

	cout << "Maximum values:"	<< endl;
	cout << "short: "			<< n_short << endl;
	cout << "int: "				<< n_int << endl;
	cout << "long: "			<< n_long << endl;
	cout << "long long: "		<< n_llong << endl;

	cout << endl;

	cout << "Minimum int value = "	<< INT_MIN << endl;
	cout << "Bits per byte = "		<< CHAR_BIT << endl;

	return 0;
}