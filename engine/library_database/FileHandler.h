#pragma once
#include "SLinkedList.h"
#include "Queue.h"
#include "Book.h"
#include "Reader.h"
#include "Borrow.h"
#include "Field.h"
#include <fstream>
#include <sstream>
#include <iostream>

class FileHandler
{
public:
	SLinkedList* loadBookListFromFile(std::string fileName);
	SLinkedList* loadReaderListFromFile(std::string fileName);
	SLinkedList* loadBorrowListFromFile(std::string fileName);

	void saveBookListToFile(std::string fileName, SLinkedList* bookList);
	void saveReaderListToFile(std::string fileName, SLinkedList* readerList);
	void saveBorrowListToFile(std::string fileName, SLinkedList* borrowList);

    //for qt
};

