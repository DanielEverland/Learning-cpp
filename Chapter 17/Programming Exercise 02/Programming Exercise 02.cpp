// Programming Exercise 02.cpp
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outputFile("output.txt");

	cout << "Please use your keyboard. Quit with enter: ";
	while (!cin.eof())
		outputFile << char(cin.get());

	cout << "Thanks!" << endl;
}