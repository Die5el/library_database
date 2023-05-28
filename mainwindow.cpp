#include "mainwindow.h"
#include "ui_mainwindow.h"

//custom
#include <QTableWidget>
#include <QT_functions.h>
#include <QString>
#include <QTableWidgetItem>
#include "engine/library_database/Database.h"
#include <string>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}








//run code if tab list is clicked
void MainWindow::on_tab_list_clicked(const QModelIndex &index)
{



    unsigned int x=0,y=0;
    std::string get_tab_name="Books";
    std::vector<std::vector<std::string>>colv; //write data from backed to local vector


    db->table_to_vec(get_tab_name,&x,&y,&colv);
    /* when the local colv will be fulfilled,
     * QT can collect data from it to write a table on screen
     */


    QTableWidget *tab = new QTableWidget(ui->midf);
    for(unsigned int i =0;i<x;i++)
        for(unsigned int j=0;j<y;j++)
        {
            QTableWidgetItem *item =  new QTableWidgetItem;
            item->setText(QString::fromStdString(colv[i][j]));
            tab->setItem(j,i,item);
        }
    qDebug() << x;
    tab->setColumnCount(y);
    tab->setRowCount(x);

    tab->show();
    //qDebug() << colv[0][0];


}

