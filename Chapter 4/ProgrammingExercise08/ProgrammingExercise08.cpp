/* ProgrammingExercise08.cpp
Do Programming Exercise 07 but use new to allocate a structure instead of declaring a structure variable
Also have the program request the pizza diameter before it requests the pizza company name.
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct PizzaData
{
	string company;
	string diameter;
	string weight;
};
int main()
{
	PizzaData* pizzaPointer = new PizzaData;

	cout << "What's the diameter of the pizza? ";
	getline(cin, pizzaPointer->diameter);

	cout << "Who made the pizza? ";
	getline(cin, pizzaPointer->company);
	
	cout << "What's the weight of the pizza? ";
	getline(cin, pizzaPointer->weight);

	cout << "The pizza is made by " << pizzaPointer->company << ", it's " << pizzaPointer->diameter << " inches in diameter and weighs " << pizzaPointer->weight << " pounds";
}