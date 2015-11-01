#ifndef TEAM_H
#define TEAM_H

#include "student.h"

#include <string>
#include <vector>
#include <algorithm>

class Student;
class Team
{
public:
    Team(); //default constructor
    Team(std::string, int); //string is name of team
    int maxSize;
    std::string teamName;
    std::vector<Student*> students;

    //Add a student to the team. Return false if fail
    bool addStudent(Student*);
    //Remove a specified student from the team. Return false if fail
    bool removeStudent(Student*);
};

#endif // TEAM_H
