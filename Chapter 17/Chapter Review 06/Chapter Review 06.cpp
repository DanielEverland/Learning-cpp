// Chapter Review 06.cpp
#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	cout << "Please give me an integer: ";
	cin >> input;

	cout.setf(ios_base::showbase);

	cout.width(15);
	cout << "dec: " << input;
		
	cout.width(15);
	cout << hex;
	cout << "hex: " << input;

	cout.width(15);
	cout << oct;
	cout << "oct: " << input;
}