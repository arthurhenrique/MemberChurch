#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include "GenericsStructs.h"

class Person
{
public:
    std::string Name;
    date Birthday;

    std::string GetName();
    void SetName(std::string name);
    date GetBirthday();
    void SetBirthday(date birthday);
    Person();
    Person::Person(std::string name);
    ~Person();
};


#endif //_PERSON_H_