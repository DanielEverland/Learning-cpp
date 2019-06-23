// Programming Exercise 03.cpp
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		cout << "Please include two arguments; source, destination";
		exit(EXIT_FAILURE);
	}

	char* sourceName = argv[1];
	char* destinationName = argv[2];

	ifstream inputStream(sourceName);
	
	if (!inputStream.is_open())
	{
		cout << "Couldn't open " << sourceName;
		exit(EXIT_FAILURE);
	}

	ofstream outputStream(destinationName);

	while (inputStream && inputStream.peek() != EOF)
		outputStream << char(inputStream.get());

	cout << "Thanks!";
}