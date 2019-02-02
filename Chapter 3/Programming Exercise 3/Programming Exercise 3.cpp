// Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and  then display the latitude in digital format.
// There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constant.
// You should use a separate variable for each input value.

#include "pch.h"
#include <iostream>

int const SecondsOfArcToMinute = 60;
int const MinutesOfArcToDegree = 60;

int main()
{
	using namespace std;

	int degrees = 0;
	int minutes = 0;
	int seconds = 0;

	cout << "Enter a latitude in degrees, minutes, and seconds" << endl;

	cout << "First, enter the degrees: ";
	cin >> degrees;
	
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;

	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	float totalConversion = (float)degrees + ((float)minutes / MinutesOfArcToDegree) + ((float)seconds / SecondsOfArcToMinute / MinutesOfArcToDegree);

	cout << degrees << " degrees, ";
	cout << minutes << " minutes, ";
	cout << seconds << " seconds, ";

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << totalConversion << " degrees";
}