// outfile.cpp -- writing to file

#include "pch.h"
#include <iostream>
#include <fstream>		// for file I/O

int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;				// create object for output
	outFile.open("carinfo.txt");	// associate with a file

	std::cout << "Enter the make and mobel of automobile: ";
	cin.getline(automobile, 50);
	std::cout << "Enter the model year: ";
	cin >> year;
	std::cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	// display information on screen with cout
	std::cout << fixed;
	std::cout.precision(2);
	std::cout.setf(ios_base::showpoint);
	std::cout << "Make and model: " << automobile << endl;
	std::cout << "Year: " << year << endl;
	std::cout << "Was asking $" << a_price << endl;
	std::cout << "Now asking $" << d_price << endl;

	// now do the exact same things using outFile instead of cout
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close();		// done with file
}