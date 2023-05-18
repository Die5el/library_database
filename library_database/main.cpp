#include "Database.h"
#include <iostream>

int main() {
	/*
	FileHandler fh;
	SLinkedList* bookList = fh.loadBookListFromFile("books.txt");
	SLinkedList* readerTable = (fh.loadReaderListFromFile("readers.txt"));
	SLinkedList* borrowTable = (fh.loadBorrowListFromFile("borrows.txt"));

	bookList->addNode(new Book(bookList->getLastId()+1, "Konon i Major", "349085490", 43, false));

	SLinkedList* readerList = fh.loadReaderListFromFile("readers.txt");
	fh.saveBookListToFile("books.txt", bookList);
	*/

	Database db;
	db.addRecord(new Book(0, "Konon i Major!", "347829", 355, false));

	db.editRecord(1, new Reader(0, "Bemben", "Z piaseczna"));

	db.deleteRecord(2, "reader");

	std::cout << ((Book*)db.getRecord(1, "book"))->getTitle();

	db.saveAllTables();




}