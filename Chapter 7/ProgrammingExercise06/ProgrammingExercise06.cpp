// ProgrammingExercise06.cpp

#include <iostream>

using namespace std;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);

const int arrsize = 10;

int main()
{
	double arr[arrsize];
	int size = arrsize;
    
	size = Fill_array(arr, size);

	cout << "----Normal array----" << endl;
	Show_array(arr, size);
	cout << endl;

	cout << "----Reverse array----" << endl;
	Reverse_array(arr, size);
	Show_array(arr, size);
	cout << endl;

	cout << "----Short reverse array----" << endl;
	Reverse_array(arr + 1, size - 2);
	Show_array(arr, size);
	cout << endl;
}

int Fill_array(double arr[], int size)
{
	int index = 0;

	cout << index << ": ";
	while (cin >> arr[index] && ++index < size)
	{
		cout << index << ": ";
	}
	cout << endl;

	return index;
}
void Show_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void Reverse_array(double arr[], int size)
{
	int count = int(float(size) / 2);
	int endIndex = size - 1;

	for (int i = 0; i < count; i++)
	{
		double cached = arr[i];
		arr[i] = arr[endIndex - i];
		arr[endIndex - i] = cached;
	}
}