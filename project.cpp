#include "project.h"

Project::Project () {
    projectName = "Default Project Name";
    projectCourseCode = "0000";
}

Project::Project (std::string name, std::string courseCode) {
    projectName = name;
    projectCourseCode = courseCode;
}

bool Project::addStudent(Student* stu) {
    students.push_back(stu);
    return true;

}

bool Project::removeStudent(Student* stu) {
    //removes all student pointers that are == to stu
    // https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
    students.erase( std::remove( students.begin(), students.end(), stu ), students.end() );
    return true;
}

bool Project::addTeam(Team* team) {
    teams.push_back(team);
    return true;

}

bool Project::removeTeam(Team* team) {
    //removes all team pointers that are == to team
    // https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
    teams.erase( std::remove( teams.begin(), teams.end(), team ), teams.end() );
    return true;
}
