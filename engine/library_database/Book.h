#pragma once
#include "Node.h"
#include <string>


class Book :
    public Node
{
    std::string title;
    std::string isbn;
    unsigned int numPages;
    bool issued;
public:
    Book(unsigned int id, std::string title, std::string isbn, unsigned int numPages, bool issued);

    std::string getTitle();
    std::string getIsbn();
    unsigned int getNumberOfPages();
    bool getIssuedState();

    void setTitle(std::string title);
    void setIsbn(std::string isbn);
    void setNumberOfPages(unsigned int numPages);
    void setIssuedState(bool issued);
};

