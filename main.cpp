#include "loginwindow.h"
#include "admin.h"
#include "student.h"
#include "user.h"
#include <QApplication>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<User*> users;
    User* admin1 = new Admin("Jacob faggot waters");
    users.push_back(admin1);
    User* admin2 = new Admin("Jacob straight waters");
    users.push_back(admin2);
    User* admin3 = new Admin("Daihee Kim Jon");
    users.push_back(admin3);
    QApplication a(argc, argv);
    LoginWindow* w = new LoginWindow(0, users);
    w->show();




    return a.exec();
}
