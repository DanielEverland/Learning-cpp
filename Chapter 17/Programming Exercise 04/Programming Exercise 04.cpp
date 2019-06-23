// Programming Exercise 04.cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char* first = "first.txt";
const char* second = "second.txt";
const char* output = "output.txt";

int main()
{
	ifstream firstInput(first);
	ifstream secondInput(second);

	if (!firstInput.is_open())
	{
		cout << "Cannot open first input!";
		exit(EXIT_FAILURE);
	}

	if (!secondInput.is_open())
	{
		cout << "Cannot open second input";
		exit(EXIT_FAILURE);
	}

	ofstream outputFile(output);
	char ch;

	while (firstInput || secondInput)
	{
		while ((ch = firstInput.get()) != '\n' && int(ch) != EOF)
		{
			if (isspace(ch))
				outputFile << " ";
			else
				outputFile << ch;
		}

		outputFile << " ";

		while ((ch = secondInput.get()) != '\n' && int(ch) != EOF)
		{
			if (isspace(ch))
				outputFile << " ";
			else
				outputFile << ch;
		}

		outputFile << endl;
	}

	cout << "Done!";
}