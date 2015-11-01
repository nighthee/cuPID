#include "registerwindow.h"
#include "mainwindow.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QtDebug"
#include "user.h"
#include <vector>

LoginWindow::LoginWindow(QWidget *parent, std::vector<User*> users):
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}


LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    qDebug() << "login pressed";
    QString qs = ui->usernameLineEdit->text();
    qDebug() << qs;
}

void LoginWindow::on_registerButton_clicked()
{
    qDebug() << "registerButton pressed";

    RegisterWindow rw;
    rw.setModal(true);
    rw.exec();
}


