#pragma once

#include <iostream>

class Stonewt
{
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	
	enum FormatState { Stone, IntPounds, FloatPounds };
	FormatState formatState = FormatState::Stone;

	// conversion functions
	operator int() const;
	operator double() const;

	std::ostream& operator<<(std::ostream& cout) const;

private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
};

