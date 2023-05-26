#include "Borrow.h"

Borrow::Borrow(unsigned int id, unsigned int readerId, unsigned int bookId) {
	this->id = id;
	this->readerId = readerId;
	this->bookId = bookId;
}

unsigned int Borrow::getReaderId() {
	return readerId;
}

unsigned int Borrow::getBookId() {
	return bookId;
}

void Borrow::setReaderId(unsigned int readerId) {
	this->readerId = readerId;
}

void Borrow::setBookId(unsigned int bookId) {
	this->bookId = bookId;
}