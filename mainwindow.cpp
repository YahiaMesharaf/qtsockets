#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

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

void MainWindow::on_connButton_clicked()
{
    client = new MyClient(this);
    client->ip = ui->ipEdit->text();
    client->port = ui->portEdit->text();
    client->doConnect(ui->messageEdit->text());
}
