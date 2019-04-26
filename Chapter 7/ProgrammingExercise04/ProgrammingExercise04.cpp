// ProgrammingExercise04.cpp

#include <iostream>

long double probability(unsigned megaballSetSize, unsigned fieldNumbers, unsigned fieldSetSize);
long double megaNumber_probability(unsigned setSize);
long double field_probability(unsigned numbers, unsigned setSize);

int main()
{
	using namespace std;

	unsigned megaballSetSize, fieldNumbers, fieldSetSize;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	cout << "Enter the megaball setsize, field numbers and field setsize\n";

	while (cin >> megaballSetSize >> fieldNumbers >> fieldSetSize)
	{
		cout << "You have a ";
		cout << probability(megaballSetSize, fieldNumbers, fieldSetSize) * 100;	// compute the odds
		cout << "% chance of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}

	cout << "bye\n";
}

long double probability(unsigned megaballSetSize, unsigned fieldNumbers, unsigned fieldSetSize)
{
	return field_probability(fieldNumbers, fieldSetSize) * megaNumber_probability(megaballSetSize);
}
long double megaNumber_probability(unsigned setSize)
{
	return 1 / long double(setSize);
}
long double field_probability(unsigned numbers, unsigned setSize)
{
	return 1 / long double(setSize) * numbers;
}