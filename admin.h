#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "project.h"

class Project;
class Admin : public User
{
public:
    Admin(); //default constructor
    Admin(std::string); //string is name of admin
    std::vector<Project*> projects;
};

#endif // ADMIN_H
