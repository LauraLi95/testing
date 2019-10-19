#include "sensorwindow.h"
#include "ui_sensorwindow.h"


sensorWindow::sensorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sensorWindow)
{
    ui->setupUi(this);
}

sensorWindow::~sensorWindow()
{
    delete ui;
}
