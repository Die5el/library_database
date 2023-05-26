#include "Queue.h"

Queue::Queue() {
	head = nullptr;
	tail = nullptr;
}

Queue::Queue(Node* newNode) {
	this->addNode(newNode);
	tail = nullptr;
}

void Queue::addNode(Node* newNode) {
	if (this->isEmpty()) {
		head = newNode;
		tail = newNode;
		head->next = nullptr;
	}
	else {
		tail->next = newNode;
		tail = newNode;
		tail->next = nullptr;
	}
}

void Queue::removeNode() {
	if (this->isEmpty())
		return;
	else {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

bool Queue::isEmpty() {
	if (head == nullptr)
		return true;
	else
		return false;
}

Node* Queue::getHead() {
	return head;
}

