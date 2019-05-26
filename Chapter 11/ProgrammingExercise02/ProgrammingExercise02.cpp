// ProgrammingExercise01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	ofstream myfile;
	myfile.open("test.txt");
	
	cout << "Enter target distance (q to quit): ";

	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		myfile << "Target Distance: " << target << ", Step Size: " << dstep << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;

			myfile << result << endl;

			steps++;
		}

		myfile << "After " << steps << " steps, the subject "
			"has the following location:\n";
		myfile << result << endl;
		result.polar_mode();
		myfile << " or\n" << result << endl;
		myfile << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	myfile.close();
}