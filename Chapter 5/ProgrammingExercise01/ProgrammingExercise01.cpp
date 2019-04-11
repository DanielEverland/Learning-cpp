/* ProgrammingExercise01.cpp -- Write a program that requests the user to enter two integers. The program should then calculate and report the sum of all the integers
	between and including the two integers.
	
	At this point, assume that the smaller integer is entered first.
	For example, if the user enters 2 and 9, the program should report that the sum of all integers from 2 to 9 is 44 */


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int startInteger, endInteger = 0;

	cout << "Please enter the lowest integer: ";
	cin >> startInteger;

	cout << "Please enter the highest integer: ";
	cin >> endInteger;

	int sum = 0;
	for (int i = startInteger; i <= endInteger; i++)
	{
		sum += i;
	}

	cout << "The sum from " << startInteger << " to " << endInteger << " is " << sum;
}