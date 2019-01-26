// floatnum.cpp -- floating-point types
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield); // Fixed-point.
	float tub = 10.0 / 3.0;		// Good to about 6 places.
	double mint = 10.0 / 3.0;	// Good to about 16 places.
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten millinon tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
}