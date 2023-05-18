#include "Field.h"

Field::Field(std::string data) {
	this->data = data;
}

std::string Field::getData() {
	return data;
}