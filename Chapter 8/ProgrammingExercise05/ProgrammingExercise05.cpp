// ProgrammingExercise05.cpp

#include <iostream>

template <typename T>
T max5(const T[5]);

int main()
{
	double dArr[5]
	{
		104.50,
		12345,
		120453.045,
		214342.05,
		2
	};

	int iArr[5]
	{
		1,
		2,
		3,
		4,
		5
	};

	double maxD = max5(dArr);
	std::cout << "Max double: " << maxD << std::endl;

	int maxI = max5(iArr);
	std::cout << "Max int: " << maxI << std::endl;
}

template <typename T>
T max5(const T arr[5])
{
	T max;

	for (int i = 0; i < 5; i++)
	{
		if (i == 0 || max < arr[i])
			max = arr[i];
	}

	return max;
}