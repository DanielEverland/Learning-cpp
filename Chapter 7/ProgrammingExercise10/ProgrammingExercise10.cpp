// ProgrammingExercise10.cpp

#include <iostream>

using namespace std;

double add(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double calculate(double x, double y, double (*pa)(double, double));

const int arithmeticCount = 3;
const int strsize = 30;

const char names[arithmeticCount][strsize]
{
	"Add",
	"Multiply",
	"Divide",
};
double (*pa[arithmeticCount])(double x, double y)
{
	&add,
	&multiply,
	&divide,
};

int main()
{
	double q = calculate(2.5, 10.4, add);

	double x, y;
	std::cout << "Please enter two values: ";
	while (cin >> x >> y)
	{
		for (int i = 0; i < arithmeticCount; i++)
		{
			double value = calculate(x, y, pa[i]);
			cout << names[i] << ": " << value << endl;
		}

		cout << endl;
		cout << "Please enter two new values: ";
	}
}


double calculate(double x, double y, double (*pa)(double xy, double yy))
{
	return pa(x, y);
}

double add(double x, double y)
{
	return x + y;
}
double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}