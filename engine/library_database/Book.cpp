#include "Book.h"

Book::Book(unsigned int id, std::string title, std::string isbn, unsigned int numPages, bool issued) {
	this->id = id;
	this->title = title;
	this->isbn = isbn;
	this->numPages = numPages;
	this->issued = issued;
}

std::string Book::getTitle() {
	return title;
}

std::string Book::getIsbn() {
	return isbn;
}

unsigned int Book::getNumberOfPages() {
	return numPages;
}

bool Book::getIssuedState() {
	return issued;
}

void Book::setTitle(std::string title) {
	this->title = title;
}

void Book::setIsbn(std::string isbn) {
	this->isbn = isbn;
}

void Book::setNumberOfPages(unsigned int numPages) {
	this->numPages = numPages;
}

void Book::setIssuedState(bool issued) {
	this->issued = issued;
}