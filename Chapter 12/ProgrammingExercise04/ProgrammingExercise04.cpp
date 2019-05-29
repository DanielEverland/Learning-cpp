#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack firstStack(5);
	unsigned long po;
	
	firstStack.push(1);
	firstStack.push(2);
	firstStack.push(3);

	firstStack.pop(po);
	cout << "Popped: " << po << endl;
	firstStack.pop(po);
	cout << "Popped: " << po << endl;

	cout << endl << "Copying" << endl;
	Stack secondStack(firstStack);

	firstStack.pop(po);
	cout << "First Popped: " << po << endl;
	secondStack.pop(po);
	cout << "Second Popped: " << po << endl;


	cout << endl << "Assignment Operator" << endl;

	firstStack = Stack(2);
	firstStack.push(69);
	firstStack.push(420);

	secondStack = firstStack;

	cout << "First Is Full: " << firstStack.isfull() << endl;
	cout << "Second Is Full: " << secondStack.isfull() << endl;
	firstStack.pop(po);
	cout << "First Popped: " << po << endl;
	secondStack.pop(po);
	cout << "Second Popped: " << po << endl;
}