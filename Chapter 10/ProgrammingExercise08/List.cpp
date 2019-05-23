#include "List.h"

List::List(int length)
{
	this->length = length;
}

List::~List()
{
	Node* current = GetFirst();

	while (current != nullptr)
	{
		Node* newCurrent = current->Next;
		delete current;
		current = newCurrent;
	}
}

void List::Add(Item value)
{
	Node* newNode = new Node();

	if(!IsEmpty())
	{
		Node* previousNode = GetLast();
		newNode->Previous = previousNode;
		previousNode->Next = newNode;
		newNode->Index = previousNode->Index + 1;
	}
	else
	{
		startNode = newNode;
	}

	newNode->Value = value;	
}

bool List::IsFull() const
{
	if (startNode == 0)
		return false;

	return GetLast()->Index >= length - 1;
}

bool List::IsEmpty() const
{
	return GetFirst() == 0;
}

void List::Visit(void(*visitFunc)(Item& v)) const
{
	Node* current = GetFirst();
	while (current != 0)
	{
		visitFunc(current->Value);
		current = current->Next;
	}	
}

Node* List::GetLast() const
{
	if (startNode == 0)
		return startNode;

	Node* current = startNode;
	while (current->Next != 0)
	{
		current = current->Next;
	}

	return current;
}

Node* List::GetFirst() const
{
	return startNode;
}
