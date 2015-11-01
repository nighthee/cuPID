#include "team.h"

Team::Team()
{
}

Team::Team(std::string name, int size)
{
    maxSize = size;
    teamName = name;
}

bool Team::addStudent(Student* stu)
{
    //checks if vector is maxed out
    if (students.size() <= maxSize)
    {
    students.push_back(stu);
    return true;
    } else {
        return false;
    }
}

bool Team::removeStudent(Student* stu)
{
    //removes all student pointers that are == to stu
    // https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
    //Checks if vector is empty
    if (students.size() > 0)
    {
        delete stu;
        students.erase( std::remove( students.begin(), students.end(), stu ), students.end() );
        return true;
    } else {
        return false;
    }
}

