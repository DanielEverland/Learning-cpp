// ProgrammingExercise03.cpp

#include <iostream>
#include <string>

using namespace std;

void func(string& str);

int main()
{
	string temp;
	cout << "Enter a string (q to quit): ";
	getline(cin, temp);

	while (temp != "q")
	{
		func(temp);
		cout << temp << endl;

		cout << "Next string (q to quit): ";
		getline(cin, temp);		
	}

	cout << "Bye.\n";
}

void func(string& str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}