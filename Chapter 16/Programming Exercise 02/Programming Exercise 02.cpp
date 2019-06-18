// Programming Exercise 02.cpp
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

bool IsPalindrome(const string& str);

int main()
{
	string input;
	cout << "Please enter a palindrome (q to quit): ";
	getline(cin, input);
	while (input != "q")
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
		getline(cin, input);
	}

	cout << "Thanks for playing!";
}

bool IsPalindrome(const string& str)
{
	string stripped = str;
	
	transform(stripped.begin(), stripped.end(), stripped.begin(), tolower);
	stripped.erase(remove_if(stripped.begin(), stripped.end(), isspace), stripped.end());
	stripped.erase(remove_if(stripped.begin(), stripped.end(), ispunct), stripped.end());
	
	string reversed(stripped.rbegin(), stripped.rend());
	return !stripped.compare(reversed);
}
