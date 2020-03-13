#pragma once
class Node
{
public:
	int data;
	int* last;
	int* next;

	Node(int i);

	void operator=(int i);
};

