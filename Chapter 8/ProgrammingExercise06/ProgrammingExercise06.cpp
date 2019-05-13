// ProgrammingExercise06.cpp

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int n);

template <> const char* maxn(const char* ar[], int n);

int main()
{
	int intArray[6]
	{
		1,
		2,
		6,
		10,
		45,
		6,
	};

	int maxIntValue = maxn(intArray, 6);
	cout << "Full Max: " << maxIntValue << endl;

	maxIntValue = maxn(intArray, 3);
	cout << "Max of first 3: " << maxIntValue << endl;


	const char* stringArray[5]
	{
		"I'm the first string!",
		"Second!",
		"I'm the third, and longer than the first!",
		"Fourth",
		"I'm the last string, and larger than the first and third!",
	};

	const char* longestString = maxn(stringArray, 5);
	cout << "Longest string" << endl << longestString << endl << endl;

	longestString = maxn(stringArray, 3);
	cout << "Longest of the first three" << endl << longestString << endl << endl;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max;

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || max < arr[i])
			max = arr[i];
	}

	return max;
}

template <> const char* maxn(const char* ar[], int n)
{
	const char* max = "SHIT";

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || strlen(max) < strlen(ar[i]))
			max = ar[i];
	}

	return max;
}