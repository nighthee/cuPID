#ifndef STUDENT_H
#define STUDENT_H

#include "profile.h"
#include "user.h"

#include <vector>

class Team;
class Student : public User
{
public:
    Student(); //default constructor
    Student(std::string); //string is name of student
    Profile* profile;
    std::vector<Team*> teams;
};

#endif // STUDENT_H
