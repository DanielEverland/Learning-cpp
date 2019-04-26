// ProgrammingExercise07.cpp

#include <iostream>

const int Max = 5;

// function prototypes
double* fill_array(double ar[], double* start, double* end);
void show_array(const double ar[], double* start, double* end);	// don't change data
void revalue(double r, double ar[], double* start, double* end);

int main()
{
	using namespace std;

	double properties[Max];

	double* start = properties;
	double* end = properties + Max;
	end = fill_array(properties, properties, end);
	show_array(properties, start, end);

	if (end != start)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))	// bad input
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "Bad input; Please enter a number: ";
		}

		revalue(factor, properties, start, end);
		show_array(properties, start, end);
	}

	cout << "Done.\n";

	cin.get();
	cin.get();
}

double* fill_array(double ar[], double* start, double* end)
{
	using namespace std;

	double temp;
	int count = 1;

	while (start != end)
	{
		cout << "Enter value #" << count << ": ";
		cin >> temp;

		if (!cin)	// bad input
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;

			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)	// signal to terminate
			break;

		*start = temp;
		start++;
		count++;
	}

	return start;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], double* start, double* end)
{
	using namespace std;
	int count = 1;
	while (start != end)
	{
		cout << "Property #" << count << ": $";
		cout << *start << endl;

		start++;
		count++;
	}
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], double* start, double* end)
{
	while (start != end)
	{
		*start *= r;
		start++;
	}
}