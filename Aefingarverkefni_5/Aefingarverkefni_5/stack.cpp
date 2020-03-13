#include "stack.h"

#include <iostream>

using namespace std;

stack::stack()
{
	this->ptr = 0;
}
void stack::push(int data)
{
	this->theStack[ptr++] = data;
}
int stack::pop()
{
	return theStack[--ptr];
}
int stack::peek()
{
	return theStack[ptr - 1];
}
void  stack::print()
{
	for (size_t i = 0; i < ptr; i++)
	{
		cout << theStack[i] << "-";
	}
	cout << endl;
}