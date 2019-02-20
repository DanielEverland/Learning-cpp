/* ProgrammingExercise07.cpp
William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:
 - The name of the pizza company, which can consist of more than one word
 - The diameter of the pizza
 - The weight of the pizza

Devise a structure that can hold this information and write a program that uses a structure variable of that type.
The program should ask the user to enter each of the preceding items of information, and then the program should display that information.
Use cin (or its methods) and cout.
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
	PizzaData testPizza;

	cout << "Who made the pizza? ";
	getline(cin, testPizza.company);

	cout << "What's the diameter of the pizza? ";
	getline(cin, testPizza.diameter);

	cout << "What's the weight of the pizza? ";
	getline(cin, testPizza.weight);

	cout << "The pizza is made by " << testPizza.company << ", it's " << testPizza.diameter << " inches in diameter and weighs " << testPizza.weight << " pounds";
}