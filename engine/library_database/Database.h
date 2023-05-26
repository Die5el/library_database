#pragma once
#include "FileHandler.h"
#include <string>
#include <vector>
class Database 
{
	FileHandler fileHandler;
	SLinkedList* bookTable;
	SLinkedList* readerTable;
	SLinkedList* borrowTable;
	
public:
	Database();

	
	std::vector<std::vector<std::string>>colv;
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

    //qt
    unsigned int x = 0, y = 0;

};

