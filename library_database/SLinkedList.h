#pragma once
#include "Node.h"
class SLinkedList :
	public Node
{
	Node* head;

public:
	SLinkedList();
	void addNode(Node* newNode);
	bool removeNode(unsigned int nodeId);
	Node* findNode(unsigned int nodeId);
	Node* getHead();
	unsigned int getLastId();
};