#pragma once

#define Item double

struct Node
{
	Node* Previous;
	Node* Next;
	Item Value;
	int Index;
};

class List
{
public:
	List(int length);
	~List();
	
	void Add(Item value);
	bool IsFull() const;
	bool IsEmpty() const;
	void Visit(void (*visitFunc)(Item& v)) const;

private:
	int length = 0;
	Node* startNode = 0;

	Node* GetLast() const;
	Node* GetFirst() const;
};

