// ProgrammingExercise02.cpp

#include <iostream>

int getInput(double[]);
void displayInput(double[], int length);
double getAverage(double[], int length);

using namespace std;

int main()
{
	double arr[10];
	int length = 0;

	length = getInput(arr);

	if (length > 0)
		displayInput(arr, length);
}

int getInput(double arr[])
{
	cout << "Please enter up to 10 golf scores, terminate with q" << endl;

	int length = 0;
	
	while (length < 10 && cin >> arr[length])
	{
		length++;
	}

	return length;
}

void displayInput(double arr[], int length)
{
	double average = getAverage(arr, length);
	
	for (int i = 0; i < length; i++)
	{
		cout << "#" << i + 1 << ": " << arr[i] << ", ";
	}

	cout << "Average: " << average << endl;
}

double getAverage(double arr[], int length)
{
	double total = 0;
	
	for (int i = 0; i < length; i++)
		total += arr[i];
	
	return total / length;
}