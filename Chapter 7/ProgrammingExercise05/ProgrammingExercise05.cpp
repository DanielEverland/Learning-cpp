// ProgrammingExercise05.cpp

#include <iostream>

using namespace std;

int factorial(int);

int main()
{
	int n;

	cout << "Please enter a factorial: ";
	cin >> n;

	cout << n << "!: " << factorial(n);
}
int factorial(int n)
{
	if (n > 0)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}