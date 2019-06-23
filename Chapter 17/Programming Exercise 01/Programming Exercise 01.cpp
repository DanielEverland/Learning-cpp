// Programming Exercise 01.cpp
#include <iostream>

using namespace std;

int main()
{
	cout << "Please enter some text: ";

	int charCount = 0;
	while (cin.peek() != '$' && cin.peek() != '\n')
	{
		charCount++;
		cin.ignore(1);
	}

	cout << "Total characters: " << charCount << endl;
	cout << "Next character in input queue: " << char(cin.peek()) << endl;
}