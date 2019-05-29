#pragma once

#include <iostream>

class complex
{
public:
	complex();
	complex(double r, double i);

	complex operator~() const;

	friend std::istream& operator>>(std::istream& cin, complex& a);
	friend std::ostream& operator<<(std::ostream& cin, complex a);
	friend complex operator+(const complex a, const complex b);
	friend complex operator-(const complex a, const complex b);
	friend complex operator*(const complex a, const complex b);
	friend complex operator*(double n, const complex a);

private:
	double real;
	double imaginary;
};