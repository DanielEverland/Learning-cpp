// ProgrammingExercise08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"

using namespace std;

void show(double&);
void testEmptyAndFull(List*);

int main()
{
	cout << "Creating new" << endl;
	List firstList(3);
	testEmptyAndFull(&firstList);
	cout << "Adding 1" << endl;
	firstList.Add(1);	
	testEmptyAndFull(&firstList);
	cout << "Adding 2" << endl;
	firstList.Add(2);
	testEmptyAndFull(&firstList);
	cout << "Adding 3" << endl;
	firstList.Add(3);
	testEmptyAndFull(&firstList);
	firstList.Visit(show);

	cout << endl << endl;

	List secondList(2);
	testEmptyAndFull(&secondList);
	cout << "Adding 10" << endl;
	secondList.Add(10);
	testEmptyAndFull(&secondList);
	secondList.Visit(show);
}

void show(double& value)
{
	cout << value << endl;
}
void testEmptyAndFull(List* list)
{
	cout << "isFull: " << list->IsFull() << endl;
	cout << "isEmpty: " << list->IsEmpty() << endl;
}