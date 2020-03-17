#pragma once

#include <iostream>
#include "StackNode.h"

using namespace std;

class stack
{
private:
	StackNode* head;

public:
	stack();
	~stack();
	void push(int data);
	int pop();
	int peek();
	void print();
};

