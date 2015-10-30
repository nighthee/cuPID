#ifndef TEAM_H
#define TEAM_H

#include "student.h"

#include <string>
#include <vector>

class Student;
class Team
{
public:
    Team(); //default constructor
    Team(std::string); //string is name of team
    int maxSize = 5;
    std::string teamName;
    std::vector<Student*> students;

    //Add a student to the team. Return false if fail
    bool addStudent(Student*);
    //Remove a specified student from the team. Return false if fail
    bool removeStudent(Student*);
};

#endif // TEAM_H
