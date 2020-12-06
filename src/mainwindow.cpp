//
// Created by Luis Johnson on 12/6/20.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
    }

MainWindow::~MainWindow() {
    delete ui;
}
