// usetime2.cpp -- Time class after operator overloading
#ifndef MYTIME2_H_
#define MYTIME2_H_

#include <iostream>

class Time
{
public:
	Time();
	Time(int h, int m = 0);

	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	void Show() const;

	Time operator+ (const Time& t) const;
	Time operator- (const Time& t) const;
	Time operator* (const double mult) const;

private:
	int hours;
	int minutes;
};

#endif // !MYTIME2_H_
