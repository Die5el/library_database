#include "SLinkedList.h"

SLinkedList::SLinkedList() {
	head = nullptr;
}

void SLinkedList::addNode(Node* newNode) {
	newNode->next = nullptr;
	if (head == nullptr) 
		head = newNode;
	else {
		Node* temp = head;
		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = newNode;
	}
}

bool SLinkedList::removeNode(unsigned int nodeId) {
	Node* temp = head, * tempPrev = temp;

	if (temp == nullptr)
		return false;

	while (temp != nullptr && temp->id != nodeId) {
		tempPrev = temp;
		temp = temp->next;
	}

	if (temp == nullptr)
		return false;
	else
		tempPrev->next = temp->next;

	delete temp;
	return true;
}

Node* SLinkedList::findNode(unsigned int nodeId) {
	Node* temp = head;

	while (temp != nullptr && temp->id != nodeId)
		temp = temp->next;

	return temp;
}

Node* SLinkedList::getHead() {
	return head;
}

unsigned int SLinkedList::getLastId() {
	if (head == nullptr)
		return 0;

	Node* temp = head;

	while (temp->next != nullptr)
		temp = temp->next;

	return temp->id;
}