// Programming Exercise 04.cpp
#include <iostream>
#include <algorithm>

using namespace std;

int reduce(long ar[], int n);

int main()
{
	long ar[10]{ 4300, 12345, 2345886, 120313, 12345, 2345886, 2345886, 1, 40, 100 };
	int newCount = reduce(ar, 10);

	for (int i = 0; i < newCount; i++)
	{
		std::cout << ar[i] << std::endl;
	}
}

int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	long* newEnd = unique(ar, ar + n);

	return newEnd - ar;
}