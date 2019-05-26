// ProgrammingExercise03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
	int trials;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		cout << "Enter trials: ";
		if (!(cin >> trials))
			break;

		int highest, lowest, average, totalSteps = 0;

		for (int i = 0; i < trials; i++)
		{
			result.reset(0.0, 0.0);
			steps = 0;

			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}

			if (i == 0 || highest < steps)
				highest = steps;

			if (i == 0 || lowest > steps)
				lowest = steps;

			totalSteps += steps;
		}		

		double averageSteps = double(totalSteps) / trials;

		cout << "Ran " << trials << " trials." << endl;
		cout << "Min: " << lowest << ", Max: " << highest << ", Average: " << averageSteps << endl;
		
		cout << "Enter target distance (q to quit): ";
	}

	cout << "Bye\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
}