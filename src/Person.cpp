#include "Person.h"

using namespace std;

string Name;
date Birthday;


string Person::GetName()
{
    return Name;
}

void Person::SetName(string name)
{
    Name = name;
}

date Person::GetBirthday()
{
    return Birthday;
}


void Person::SetBirthday(date birthday)
{
    Birthday.day   = birthday.day;
    Birthday.month = birthday.month;
    Birthday.year  = birthday.year;
}

Person::Person()
{
    Name = "";
    Birthday = { 1, 1, 1900 };
}

Person::Person(string name)
{
    Name = name;
    Birthday = { 1, 1, 1900 };
}

Person::~Person()
{

}