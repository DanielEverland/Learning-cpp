// ProgrammingExercise08a.cpp

#include <iostream>
#include <array>
#include <string>

// constant data
const int Seasons = 4;
const char* Snames[4]
{ "Spring", "Summer", "Fall", "Winter" };

// function to modify array object
void fill(double(*pa)[Seasons]);
// function that uses array object without modifying it
void show(double da[]);

int main()
{
	double expenses[Seasons];
	fill(&expenses);
	show(expenses);
}

void fill(double(*pa)[Seasons])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(double da[])
{
	using namespace std;

	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}

	cout << "Total Expenses: $" << total << endl;
}