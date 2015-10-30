#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();

    void on_registerButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::LoginWindow *ui;
    MainWindow *mw;
};

#endif // LOGINWINDOW_H
