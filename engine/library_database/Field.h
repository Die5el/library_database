#pragma once
#include "Node.h"
#include <string>
class Field :
	public Node
{
	std::string data;
public:
	Field(std::string data);
	std::string getData();
};

