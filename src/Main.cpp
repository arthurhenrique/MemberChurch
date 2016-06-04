#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

int main(int argc, char **argv)
{
    string name = "Arthur";
    Person *person = new Person(name);
    
    cout << "GetName:     " << person->GetName()           << endl;
    cout << "GetBirthday: " << person->GetBirthday().day   << endl;
    cout << "GetBirthday: " << person->GetBirthday().month << endl;
    cout << "GetBirthday: " << person->GetBirthday().year  << endl;

    delete person;

    int stop;
    cin >> stop;
}