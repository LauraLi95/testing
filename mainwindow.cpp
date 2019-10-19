#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sensorwindow.h"

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




void MainWindow::on_Sensor1_clicked()
{
    sensorWindow *win = new sensorWindow();
    win->show();

}

void MainWindow::on_Sensor2_clicked()
{
    sensorWindow *win = new sensorWindow();
    win->show();
}

void MainWindow::on_Sensor3_clicked()
{
    sensorWindow *win = new sensorWindow();
    win->show();
}
