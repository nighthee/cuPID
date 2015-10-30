#include "registerwindow.h"
#include "mainwindow.h"
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QtDebug"

LoginWindow::LoginWindow(QWidget *parent) :
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

    mw = new MainWindow(this);
    mw->show();
    this->hide();
}

void LoginWindow::on_registerButton_clicked()
{
    qDebug() << "registerButton pressed";

    RegisterWindow rw;
    rw.setModal(true);
    rw.exec();
}


