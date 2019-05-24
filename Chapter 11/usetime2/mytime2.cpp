// mytime2.cpp -- implementing Time methods
#include <iostream>
#include "mytime2.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time& t) const
{
	Time sum;

	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

Time Time::operator-(const Time& t) const
{
	Time diff;

	int tot1 = t.minutes + 60 * t.hours;
	int tot2 = minutes + 60 * hours;
	
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;

	return diff;
}

Time Time::operator*(double mult) const
{
	Time result;

	long totalMinutes = (minutes + 60 * hours) * mult;

	result.minutes = totalMinutes % 60;
	result.hours = totalMinutes / 60;

	return result;
}

void Time::Show() const
{
	std::cout << hours << ":" << minutes;
}