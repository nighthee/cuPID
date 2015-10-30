#ifndef PROJECT_H
#define PROJECT_H

#include "student.h"

#include <string>
#include <vector>
#include <algorithm>

class Project
{
public:
    Project(); //default constructor
    Project(std::string, std::string); //string is name of project
    std::string projectName;
    std::string projectCourseCode;
    std::vector<Team*> teams;
    std::vector<Student*> students;

    //Add a Team to the Project. Return fasle if fail
    bool addTeam(Team*);
    //Remove a specific team from the project. Return false if fail
    bool removeTeam(Team*);
    //Add a student to the Project. Return fasle if fail
    bool addStudent(Student*);
    //Remove a specific student from the project. Return false if fail
    bool removeStudent(Student*);

};

#endif // PROJECT_H
