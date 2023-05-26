#include "engine/library_database/Database.h"
#include "engine/library_database/gui.h"
#include <QDebug>
void read(Database *db)
{
    db->y = 5;
    db->x = 0;
    std::vector<std::string> temp;
    while (db->getRecord(db->x, "book"))
    {
        std::string id = std::to_string(((Book*)db->getRecord(db->x, "book"))->id); temp.push_back(id);
        std::string title = (((Book*)db->getRecord(db->x, "book"))->getTitle()); temp.push_back(title);
        std::string isbn = (((Book*)db->getRecord(db->x, "book"))->getIsbn()); temp.push_back(isbn);
        std::string pages = std::to_string(((Book*)db->getRecord(db->x, "book"))->getNumberOfPages()); temp.push_back(pages);
        std::cout << temp.size() <<std::endl;
        db->colv.push_back(temp);
        temp.clear();
        db->x++;
    };


}

void vec(Database *db)
{
    std::cout << db->colv.size() << std::endl;
    //std::cout << db->colv[0][0] << std::endl;
}
