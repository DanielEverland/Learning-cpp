// Programming Exercise 09.cpp
#include <iostream>
#include <vector>
#include <ctime>
#include <array>
#include <list>

using namespace std;

vector<int> GetUnsortedList(int size);
list<int> GetInitializedList(vector<int> from);
void StartTest();
double EndTest();

clock_t startTime;

int main()
{
	srand(time(0));

	array<int, 3> arraySizes{ 10000, 100000, 1000000 };

	for (int i = 0; i < arraySizes.size(); i++)
	{
		cout << "Starting test run with size of " << arraySizes[i] << endl;
		
		vector<int> unsorted = GetUnsortedList(arraySizes[i]);
		vector<int> vectorTest(unsorted);
		list<int> listTest = GetInitializedList(unsorted);
		double time;

		cout.setf(ios_base::fixed);
		cout.precision(3);

		StartTest();
		sort(vectorTest.begin(), vectorTest.end());
		time = EndTest();
		cout << "Sorting Vector: " << time << endl;

		StartTest();
		listTest.sort();
		time = EndTest();
		cout << "Sorting List: " << time << endl;

		listTest = GetInitializedList(unsorted);
		vectorTest.clear();
		StartTest();
		vectorTest.insert(vectorTest.begin(), listTest.begin(), listTest.end());
		sort(vectorTest.begin(), vectorTest.end());
		listTest.clear();
		listTest.insert(listTest.begin(), vectorTest.begin(), vectorTest.end());
		time = EndTest();
		cout << "Long Conversion: " << time << endl;

		cout << endl << endl;
	}
}

vector<int> GetUnsortedList(int size)
{
	vector<int> toReturn(size);

	for (int i = 0; i < size; i++)
		toReturn[i] = rand();

	return toReturn;
}

list<int> GetInitializedList(vector<int> from)
{
	list<int> list;

	list.insert(list.begin(), from.begin(), from.end());

	return list;
}

void StartTest()
{
	startTime = clock();
}

double EndTest()
{
	clock_t end = clock();
	return double((end - startTime) / CLOCKS_PER_SEC);
}