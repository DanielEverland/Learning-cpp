#include <iostream>
using std::cout;
#include "Stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;		// integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()	// default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

std::ostream& Stonewt::operator<<(std::ostream& cout) const
{
	if (formatState == FormatState::Stone)
	{
		cout << stone << " stones\n";
	}
	else if (formatState == FormatState::IntPounds)
	{
		cout << int(pounds) << " pounds\n";
	}
	else if (formatState == FormatState::FloatPounds)
	{
		cout << float(pounds) << " pounds\n";
	}

	return cout;
}

// conversion functions
Stonewt::operator int() const
{
	return int(pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}