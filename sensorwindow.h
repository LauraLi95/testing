#ifndef SENSORWINDOW_H
#define SENSORWINDOW_H

#include <QDialog>

namespace Ui {
class sensorWindow;
}

class sensorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sensorWindow(QWidget *parent = nullptr);
    ~sensorWindow();

private:
    Ui::sensorWindow *ui;
};

#endif // SENSORWINDOW_H
