// Programming Exercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void PrintMice();
void PrintRun();

int main()
{
	PrintMice();
	PrintMice();
	PrintRun();
	PrintRun();
}
void PrintMice()
{
	cout << "Three blind mice" << endl;
}
void PrintRun() {
	cout << "See how they run" << endl;
}