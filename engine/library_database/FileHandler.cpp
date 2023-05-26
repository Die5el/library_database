#include "FileHandler.h"

SLinkedList* FileHandler::loadBookListFromFile(std::string fileName) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::in);

	if (!listFile.is_open())
		return new SLinkedList;
	else {
		SLinkedList* bookList = new SLinkedList;
		std::string lineBuffer;
		std::string fieldBuffer;
		Queue dataQueue;
		const unsigned int column_count = 5;
		std::string fieldList[column_count];

		while (std::getline(listFile, lineBuffer)) {
			std::stringstream ss(lineBuffer);

			while (std::getline(ss, fieldBuffer, ';'))
				dataQueue.addNode(new Field(fieldBuffer));
			
			for (int i = 0; i < column_count; i++) {
				fieldList[i] = ((Field*)dataQueue.getHead())->getData();
				dataQueue.removeNode();
			}

			bookList->addNode(new Book((unsigned int)stoi(fieldList[0]), fieldList[1], fieldList[2], (unsigned int)stoi(fieldList[3]), stoi(fieldList[4])));
		}
		listFile.close();
		return bookList;
	}
}

SLinkedList* FileHandler::loadReaderListFromFile(std::string fileName) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::in);

	if (!listFile.is_open())
		return new SLinkedList;
	else {
		SLinkedList* readerList = new SLinkedList;
		std::string lineBuffer;
		std::string fieldBuffer;
		Queue dataQueue;
		const unsigned int column_count = 3;
		std::string fieldList[column_count];

		while (std::getline(listFile, lineBuffer)) {
			std::stringstream ss(lineBuffer);

			while (std::getline(ss, fieldBuffer, ';'))
				dataQueue.addNode(new Field(fieldBuffer));

			for (int i = 0; i < column_count; i++) {
				fieldList[i] = ((Field*)dataQueue.getHead())->getData();
				dataQueue.removeNode();
			}

			readerList->addNode(new Reader((unsigned int)stoi(fieldList[0]), fieldList[1], fieldList[2]));
		}
		listFile.close();
		return readerList;
	}
}

SLinkedList* FileHandler::loadBorrowListFromFile(std::string fileName) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::in);

	if (!listFile.is_open())
		return new SLinkedList;
	else {
		SLinkedList* borrowList = new SLinkedList;
		std::string lineBuffer;
		std::string fieldBuffer;
		Queue dataQueue;
		const unsigned int column_count = 3;
		std::string fieldList[column_count];

		while (std::getline(listFile, lineBuffer)) {
			std::stringstream ss(lineBuffer);

			while (std::getline(ss, fieldBuffer, ';'))
				dataQueue.addNode(new Field(fieldBuffer));

			for (int i = 0; i < column_count; i++) {
				fieldList[i] = ((Field*)dataQueue.getHead())->getData();
				dataQueue.removeNode();
			}

			borrowList->addNode(new Borrow((unsigned int)stoi(fieldList[0]), stoi(fieldList[1]), stoi(fieldList[2])));
		}
		listFile.close();
		return borrowList;
	}
}

void FileHandler::saveBookListToFile(std::string fileName, SLinkedList* bookList) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::out);

	//if (!listFile.is_open())
	//	return;
	//else {
		Book* saveBuffer = (Book*)bookList->getHead();

		while (saveBuffer != nullptr) {
			listFile << saveBuffer->id << ';' << saveBuffer->getTitle() << ';' << saveBuffer->getIsbn() << ';' << saveBuffer->getNumberOfPages() << ';' << (saveBuffer->getIssuedState() ? '1' : '0') << std::endl;
			saveBuffer = (Book*)saveBuffer->next;
		}
		listFile.close();
	//}
}

void FileHandler::saveReaderListToFile(std::string fileName, SLinkedList* readerList) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::out);

	//if (!listFile.is_open())
	//	return;
	//else {
		Reader* saveBuffer = (Reader*)readerList->getHead();

		while (saveBuffer != nullptr) {
			listFile << saveBuffer->id << ';' << saveBuffer->getName() << ';' << saveBuffer->getSurname() << std::endl;
			saveBuffer = (Reader*)saveBuffer->next;
		}
		listFile.close();
	//}
}

void FileHandler::saveBorrowListToFile(std::string fileName, SLinkedList* borrowList) {
	std::fstream listFile;
	listFile.open(fileName, std::ios::out);

	//if (!listFile.is_open())
	//	return;
	//else {
		Borrow* saveBuffer = (Borrow*)borrowList->getHead();

		while (saveBuffer != nullptr) {
			listFile << saveBuffer->id << ';' << saveBuffer->getReaderId() << ';' << saveBuffer->getBookId() << std::endl;
			saveBuffer = (Borrow*)saveBuffer->next;
		}
		listFile.close();
	//}
}

