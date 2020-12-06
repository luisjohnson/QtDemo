//
// Created by Luis Johnson on 12/6/20.
//

#ifndef QTDEMO_MAINWINDOW_H
#define QTDEMO_MAINWINDOW_H

#include <QMainWindow>

// Declares the MainWindow Class is the Ui namespace. This is the standar namespace for
// UI classes generated from .ui files
namespace Ui { class MainWindow; }

class MainWindow: public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //QTDEMO_MAINWINDOW_H
