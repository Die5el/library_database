#include "Reader.h"

Reader::Reader(unsigned int id, std::string name, std::string surname) {
	this->id = id;
	this->name = name;
	this->surname = surname;
}

std::string Reader::getName() {
	return name;
}

std::string Reader::getSurname() {
	return surname;
}

void Reader::setName(std::string name) {
	this->name = name;
}

void Reader::setSurname(std::string surname) {
	this->surname = surname;
}