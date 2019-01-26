// hexoct1.cpp -- shows hex and octal literals
#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;		// Decimal integer literal
	int waist = 0x42;	// Hexadecimal integer literal
	int inseam = 042;	// octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
}