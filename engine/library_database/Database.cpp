#include "Database.h"
#include <QDebug>
Database::Database() {
	loadAllTables();
}

void Database::loadAllTables() {
	bookTable = fileHandler.loadBookListFromFile("books.txt");
	readerTable = fileHandler.loadReaderListFromFile("readers.txt");
	borrowTable = fileHandler.loadBorrowListFromFile("borrows.txt");
}

void Database::saveAllTables() {
	fileHandler.saveBookListToFile("books.txt", bookTable);
	fileHandler.saveReaderListToFile("readers.txt", readerTable);
	fileHandler.saveBorrowListToFile("borrows.txt", borrowTable);
}

void Database::addRecord(Book* bufferBook) {
	bufferBook->id = bookTable->getLastId()+1;
	bookTable->addNode(bufferBook);
}

void Database::addRecord(Reader* bufferReader) {
	bufferReader->id = readerTable->getLastId()+1;
	readerTable->addNode(bufferReader);
}

void Database::addRecord(Borrow* bufferBorrow) {
	bufferBorrow->id = borrowTable->getLastId()+1;
	borrowTable->addNode(bufferBorrow);
}

void Database::editRecord(unsigned int recordId, Book *bufferBook) {
	Book* edited = (Book*)bookTable->findNode(recordId);
	if (bufferBook->getTitle() != edited->getTitle())
		edited->setTitle(bufferBook->getTitle());
	if (bufferBook->getIsbn() != edited->getTitle())
		edited->setIsbn(bufferBook->getIsbn());
	if (bufferBook->getNumberOfPages() != edited->getNumberOfPages())
		edited->setNumberOfPages(bufferBook->getNumberOfPages());
	if (bufferBook->getIssuedState() != edited->getIssuedState())
		edited->setIssuedState(bufferBook->getIssuedState());
	delete bufferBook;
}

void Database::editRecord(unsigned int recordId, Reader *bufferReader) {
	Reader* edited = (Reader*)readerTable->findNode(recordId);
	if (bufferReader->getName() != edited->getName())
		edited->setName(bufferReader->getName());
	if (bufferReader->getSurname() != edited->getSurname())
		edited->setSurname(bufferReader->getSurname());
	delete bufferReader;
}

void Database::editRecord(unsigned int recordId, Borrow *bufferBorrow) {
	Borrow* edited = (Borrow*)borrowTable->findNode(recordId);
	if (bufferBorrow->getReaderId() != edited->getReaderId())
		edited->setReaderId(bufferBorrow->getReaderId());
	if (bufferBorrow->getBookId() != edited->getBookId())
		edited->setBookId(bufferBorrow->getBookId());
	delete bufferBorrow;
	
}

Node* Database::getRecord(unsigned int recordId, std::string table) {
	if (table == "book")
		return bookTable->findNode(recordId);
	else if (table == "reader")
		return readerTable->findNode(recordId);
	else if (table == "borrow")
		return borrowTable->findNode(recordId);
	else
		return nullptr;
}


void Database::deleteRecord(unsigned int recordId, std::string table) {
	if (table == "book")
		bookTable->removeNode(recordId);
	else if (table == "reader")
		readerTable->removeNode(recordId);
	else if (table == "borrow")
		borrowTable->removeNode(recordId);
}

//----------------------------------------------------------------------------------------------qt
//get data and write into global vector
void Database::table_to_vec(std::string get_tab_name,unsigned int *x,unsigned int *y,std::vector<std::vector<std::string>>*colv)
{
    if(get_tab_name == "Books")
    {
        std::vector<std::string>rowv;
        //for tests - static values
        int colY =4;
        int rowX = 3;


        //
        unsigned int tempx=0,tempy=0;
        for(int i = 0;i<rowX;i++)
        {

            for(int j =0;j<colY;j++)
            {
                if(i ==0)
                {
                    rowv.push_back("a");
                    tempy++;
                }
                else
                {
                    rowv.push_back("b");
                }
            }
            colv->push_back(rowv);
            rowv.clear();
            tempx++;
        }
        *x=tempx;
        *y=tempy;


        /*
        while(bookTable->findNode(*x))
        {

            *x++;
        }
*/
    }
}
