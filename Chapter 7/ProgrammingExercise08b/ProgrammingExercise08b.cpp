// ProgrammingExercise08b.cpp 

#include <iostream>
#include <array>
#include <string>

// constant data
const int Seasons = 4;
const char* Snames [Seasons]
{ "Spring", "Summer", "Fall", "Winter" };

struct expenses
{
	double expenses[Seasons];
};

// function to modify array object
void fill(expenses* pa);
// function that uses array object without modifying it
void show(expenses da);

int main()
{
	expenses expenses;
	fill(&expenses);
	show(expenses);
}

void fill(expenses* pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->expenses[i];
	}
}

void show(expenses da)
{
	using namespace std;

	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da.expenses[i] << endl;
		total += da.expenses[i];
	}

	cout << "Total Expenses: $" << total << endl;
}