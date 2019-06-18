// Programming Exercise 01.cpp
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool IsPalindrome(const string& str);

int main()
{
	string input;
	cout << "Please enter a palindrome (q to quit): ";
	while (cin >> input && input != "q")
	{
		if (IsPalindrome(input))
		{
			cout << input << " is a palindrome!" << endl;
		}
		else
		{
			cout << "Womp womp, try again!" << endl;
		}

		cout << "Please enter your next palindrome: ";
	}

	cout << "Thanks for playing!";
}

bool IsPalindrome(const string& str)
{
	string reversed(str.rbegin(), str.rend());
	return !str.compare(reversed);
}