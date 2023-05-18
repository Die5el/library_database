#pragma once
#include "Node.h"

class Queue
{
	Node* head;
	Node* tail;

public:
	Queue();
	Queue(Node* newNode);
	void addNode(Node* newNode);
	void removeNode();
	bool isEmpty();
	Node* getHead();
};

