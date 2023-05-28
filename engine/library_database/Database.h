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
//std::vector<std::vector<std::string>>&colv

    //functions for operations in qt
    void table_to_vec(std::string get_tab_name,unsigned int *x,unsigned int *y,std::vector<std::vector<std::string>>*colv);
    unsigned int x,y;
    std::string get_tab_name;
    std::vector<std::vector<std::string>>colv;
   \

};

//create a global object of Database class
class globalDB
{
public:
    Database *db = new Database;

};
