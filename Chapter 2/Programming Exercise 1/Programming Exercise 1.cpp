// Programming Exercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Please input your name\n";
	string name;
	getline(cin, name);

	cout << "Please input your address\n";
	string address;
	getline(cin, address);

	cout << "Hello " << name << ", you live at " << address;
}