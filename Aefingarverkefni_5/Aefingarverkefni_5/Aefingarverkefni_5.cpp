// Aefingarverkefni_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stack.h"
#include "Node.h"

#include <iostream>

void testStack() {

	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	s.print();
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.print();

	cout << s.peek() << endl;
}


int main()
{

}
