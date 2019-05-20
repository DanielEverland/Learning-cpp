// ProgrammingExercise02.cpp

#include <iostream>
#include <string>

using std::string;

// function prototypes
void strcount(const string str);

int main()
{
	using namespace std;
	string input;
	char next;

	cout << "Enter a line:\n";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}

	cout << "Bye\n";
}

void strcount(const string str)
{
	using namespace std;

	static int total = 0;		// static local variable
	int count = 0;				// automatic local variable

	cout << "\"" << str << "\" contains ";
	for (int i = 0; i < str.length(); i++)	// go to end of string
		count++;
	total += count;

	cout << count << " characters\n";
	cout << total << " characters total\n";
}