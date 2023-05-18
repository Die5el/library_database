#pragma once
#include "Node.h"
class Borrow :
    public Node
{
    unsigned int readerId;
    unsigned int bookId;

public:
    Borrow(unsigned int id, unsigned int readerId, unsigned int bookId);
    unsigned int getReaderId();
    unsigned int getBookId();

    void setReaderId(unsigned int readerId);
    void setBookId(unsigned int bookId);
};

