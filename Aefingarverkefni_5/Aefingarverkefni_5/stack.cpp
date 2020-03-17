#include "stack.h"

#include <iostream>

using namespace std;

stack::stack()
{
	head = nullptr;
}
void stack::push(int data)
{
	if (!head)
	{
		head = new StackNode(data);
	}
	else
	{
		StackNode* newNode = new StackNode(data);
		newNode->next = head;
		head = newNode;
	}
}
int stack::pop()
{
	if (head)
	{
		StackNode* temp = head->next;
		int output = head->data;
		delete head;
		head = temp;

		return output;
	}
	else
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
}
int stack::peek()
{
	return (head ?  head->data : -1);
}
void  stack::print()
{
	StackNode* current = head;

	while (current)
	{
		cout << current->data << " - ";

		current = current->next;
	}
}
stack::~stack()
{
	StackNode* current = head;
	StackNode* next;

	while (current)
	{
		next = current->next;
		delete current;
		current = next;
	}

	cout << "Stack Purged" << endl;
}