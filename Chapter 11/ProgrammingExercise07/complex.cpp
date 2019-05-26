#include "complex.h"

complex::complex()
{
	real = 0;
	imaginary = 0;
}
complex::complex(double r, double i)
{
	real = r;
	imaginary = i;
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

std::istream& operator>>(std::istream& cin, complex& a)
{
	std::cout << "real: ";
	cin >> a.real;

	std::cout << "imaginary: ";
	cin >> a.imaginary;

	return cin;
}

std::ostream& operator<<(std::ostream& cout, complex a)
{
	cout << "(" << a.real << ", " << a.imaginary << "i)";

	return cout;
}

complex operator+(const complex a, const complex b)
{
	return complex(a.real + b.real, a.imaginary + b.imaginary);
}
complex operator-(const complex a, const complex b)
{
	return complex(a.real - b.real, a.imaginary - b.imaginary);
}
complex operator*(const complex a, const complex b)
{
	return complex(a.real * b.real - a.imaginary * b.imaginary, a.real * b.imaginary + a.imaginary * b.real);
}
complex operator*(double n, const complex a)
{
	return complex(a.real * n, a.imaginary * n);
}