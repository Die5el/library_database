#pragma once
#include "Node.h"
#include <string>
class Reader :
    public Node
{
    std::string name;
    std::string surname;

public:
    Reader(unsigned int id, std::string name, std::string surname);
    std::string getName();
    std::string getSurname();

    void setName(std::string name);
    void setSurname(std::string surname);
};

