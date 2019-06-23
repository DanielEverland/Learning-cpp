// Chapter Review 07.cpp
#include <iostream>
#include <string>

using namespace std;

void inline eatline() { while (cin.get() != '\n'); }

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	
	int wages = 0;
	cout << "Enter your hourly wages: ";
	cin >> wages;

	eatline();

	double hoursWorked;
	cout << "Enter numbers of hours worked: ";
	cin >> hoursWorked;

	cout << "First format:" << endl;
	cout << right;
	cout.width(25);
	cout << name << ": $";

	cout.width(10);
	cout << fixed;
	cout.precision(2);
	cout << wages;
	cout << ": ";

	cout.precision(2);
	cout.width(5);
	cout << hoursWorked << endl;


	cout << "Second format: " << endl;
	cout << left;
	cout.width(25);
	cout << name;

	cout << ": $";
	cout << fixed;
	cout.precision(2);
	cout.width(10);
	cout << left;
	cout << wages;

	cout << ":";
	cout.precision(2);
	cout << left;
	cout.width(5);
	cout << hoursWorked;
}