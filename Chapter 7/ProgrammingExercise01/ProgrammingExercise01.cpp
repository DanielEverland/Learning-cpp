// ProgrammingExercise01.cpp

#include <iostream>

double n1;
double n2;

bool getPair();
double calcHarmonic(double x, double y);

using namespace std;

int main()
{
	cout << "Please enter a pair of numbers: ";

	while (!getPair())
	{
		cout << "Harmonic: " << calcHarmonic(n1, n2) << endl;
		cout << "Non-zero, please enter another pair: ";
	}

	cout << "Thanks for entering 0!";
}

bool getPair()
{
	cin >> n1;
	cin >> n2;

	return n1 == 0 || n2 == 0;
}

double calcHarmonic(double x, double y)
{
	return 2.0 * x * y / (x + y);
}