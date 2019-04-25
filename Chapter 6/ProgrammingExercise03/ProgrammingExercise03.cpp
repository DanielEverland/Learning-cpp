/* ProgrammingExercise03.cpp
Write a precursor to a menu-driven program. The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies. Then the program should use a
switch to select a simple action based on the user's selection.*/

#include "pch.h"
#include <iostream>

void handle_input();

using namespace std;

int main()
{
	cout << "Enter one of the following choices:" << endl;
	cout << "c) carnivore		p) pianist\nt) tree			g) game" << endl;

	handle_input();
}
void handle_input()
{
	char input;
	cin >> input;

	switch (input)
	{
	case 'c': cout << "C stands for carnivore";
		break;
	case 'p': cout << "P stands for pianist, which sounds a bit like penises";
		break;
	case 't': cout << "T stands for tree";
		break;
	case 'g': cout << "G stands for game";
		break;
	default:
		{
			cout << "Please enter a c, p, t, or g: ";

			handle_input();
			break;
		}		
	}
}