#pragma once
struct StackNode
{
	int data;
	StackNode* next;
	StackNode(int data) {
		this->data = data;
		next = nullptr;
	}
};

