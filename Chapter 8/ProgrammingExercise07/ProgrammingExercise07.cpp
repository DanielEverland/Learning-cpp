// ProgrammingExercise07.cpp

#include <iostream>

template <typename T>		// template A
T SumArray(T arr[], int n);

template <typename T>		// template B
T SumArray(T* arr[], int n);

// report the total number of things and the sum of all the debts

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;

	int things[6] = { 13, 31, 103, 301, 310, 130 };

	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double* pd[3];

	// set pointers to the amount of members of the structure in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's counts of things:\n";

	// things is an array of int
	int firstSum = SumArray(things, 6);	// uses template A

	cout << "Number of things: " << firstSum << endl;

	cout << "Listing Mr. E's debts:\n";
	// pd is an array of pointers to double
	double secondSum = SumArray(pd, 3);		// uses template B (more specialized)

	cout << "Total sum: " << secondSum << endl;
}

template <typename T>
T SumArray(T arr[], int n)
{
	T sum{};

	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum;
}

template <typename T>
T SumArray(T* arr[], int n)
{
	T sum{};
	
	for (int i = 0; i < n; i++)
		sum += *arr[i];

	return sum;
}