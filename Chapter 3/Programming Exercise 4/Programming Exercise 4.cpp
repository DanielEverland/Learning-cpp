// Write a program that asks the user to enter the number of seconds as an integer value (use type long, or, if available long long)
// and then displays the equivalent time in days, hours, minutes and seconds.
// Use symbolic constants to represent the number of hours in the day, the number of minutes in an hour, and the number of seconds in a minute.

#include "pch.h"
#include <iostream>

int const SecondsInMinute = 60;
int const MinutesInHour = 60;
int const HoursInDay = 24;
int const SecondsInHour = SecondsInMinute * MinutesInHour;
int const SecondsInDay = SecondsInHour * HoursInDay;

int main()
{
	using namespace std;

	long long totalSeconds = 0;

	cout << "Enter the number of seconds: ";
	cin >> totalSeconds;

	long long days = totalSeconds / SecondsInMinute / MinutesInHour / HoursInDay;
	long long hours = (totalSeconds % SecondsInDay) / SecondsInHour;
	long long minutes = (totalSeconds % SecondsInHour) / SecondsInMinute;
	long long seconds = totalSeconds % SecondsInMinute;

	cout << totalSeconds << " seconds = ";
	cout << days << " days, ";
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << seconds << " seconds";
}