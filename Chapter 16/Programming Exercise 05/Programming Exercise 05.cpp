// Programming Exercise 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <algorithm>

using namespace std;

template<class T>
int reduce(T ar[], int n);

int main()
{
	long ar[10]{ 4300, 12345, 2345886, 120313, 12345, 2345886, 2345886, 1, 40, 100 };
	int newCount = reduce(ar, 10);

	for (int i = 0; i < newCount; i++)
		std::cout << ar[i] << std::endl;

	string ar2[5]{ "First", "Second", "First", "Third", "Zebra" };
	newCount = reduce(ar2, 5);

	for (int i = 0; i < newCount; i++)
		std::cout << ar2[i] << std::endl;
}

template<class T>
int reduce(T ar[], int n)
{
	sort(ar, ar + n);
	T* newEnd = unique(ar, ar + n);

	return newEnd - ar;
}