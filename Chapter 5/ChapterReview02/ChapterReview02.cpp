#include "pch.h"
#include <iostream>

using namespace std;

// What would the following code fragment print if it were part of a valid program?
int main()
{
	int i;
	for (i = 0; i < 5; i++)
		cout << i;
		cout << endl;
}

// It would print the following since the last cout isn't a part of the body since there are no braces
// 1234
// 