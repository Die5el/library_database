#include "mainwindow.h"
#include "ui_mainwindow.h"

//custom
#include <QTableWidget>
#include <QT_functions.h>
#include <QString>
#include <QTableWidgetItem>
#include "engine/library_database/Database.h"
#include "engine/library_database/gui.h"
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









void MainWindow::on_tab_list_clicked(const QModelIndex &index)
{
    Database *db = new Database;
    read(&db);
    vec(db);
}

