#pragma once
#include "FileHandler.h"
#
class Database
{
	FileHandler fileHandler;
	SLinkedList* bookTable;
	SLinkedList* readerTable;
	SLinkedList* borrowTable;
public:
	Database();

	void loadAllTables();
	void saveAllTables();

	void addRecord(Book* bufferBook);
	void addRecord(Reader* bufferReader);
	void addRecord(Borrow* bufferBorrow);

	void editRecord(unsigned int recordId, Book *bufferBook);
	void editRecord(unsigned int recordId, Reader *bufferReader);
	void editRecord(unsigned int recordId, Borrow *bufferborrow);

	Node* getRecord(unsigned int recordId, std::string table);

	void deleteRecord(unsigned int recordId, std::string table);
};

