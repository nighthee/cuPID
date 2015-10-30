#include "student.h"


Student::Student() : User(){
    this->profile = new Profile();
}
Student::Student(std::string name) : User(name){
    this->profile = new Profile();
}
