#pragma once

#include <iostream>

using namespace std;

class stack
{
private:
	int theStack[10];
	unsigned int ptr;

public:
	stack();
	void push(int data);
	int pop();
	int peek();
	void print();
};

