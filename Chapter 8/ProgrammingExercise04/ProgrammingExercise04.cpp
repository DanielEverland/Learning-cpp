// ProgrammingExercise04.cpp

#include <iostream>
using namespace std;
#include <cstring>	// for strlen(), strcpy()
struct stringy {
	char* str;		// points to a string
	int ct;			// length of string (not counting '\0')
};

void set(stringy& str, const char chars[]);
void show(const char* str, int n = 1);
void show(const stringy& str, int n = 1);

int main()
{
	stringy beany{};
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
}

void set(stringy& str, const char chars[])
{
	str.ct = strlen(chars);
	str.str = new char[str.ct + 1];

	for (int i = 0; i < str.ct; i++)
		str.str[i] = chars[i];

	str.str[str.ct] = '\0';
}

void show(const stringy& str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}
void show(const char* str, int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}