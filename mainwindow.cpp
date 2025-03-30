#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , clicker(new autoclicker(this))
{
    ui->setupUi(this);
    setWindowTitle("EZ Autoclicker");
    setFixedSize(width(), height());
}

MainWindow::~MainWindow()
{
    delete ui;
}
