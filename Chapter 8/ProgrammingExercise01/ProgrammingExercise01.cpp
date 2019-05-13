// ProgrammingExercise01.cpp

#include <iostream>

using namespace std;

void print(const char* t);
void print(const char* t, int n);

int timesCalled = 0;

int main()
{
	print("First time called");
	print("Second time called");
	print("Third time called");

	cout << "Now we will call a new string "  << timesCalled << " times!" << endl;

	print("CUNT", 1);
}

void print(const char* t)
{
	timesCalled++;

	cout << t << endl;
}
void print(const char* t, int n)
{
	if (n != 0)
	{
		for (int i = 0; i < timesCalled; i++)
			cout << t << endl;
	}

	timesCalled++;
}