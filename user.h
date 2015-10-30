#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    User();
    User(std::string name);
    //~User();
    std::string name;
};

#endif // USER_H
