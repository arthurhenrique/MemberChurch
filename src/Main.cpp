#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

int main(int argc, char **argv)
{
    string name = "Arthur";
    Person *person = new Person(name);
    
    cout << person->GetName() << endl;

    cout << person->GetBirthday().day << endl;
    cout << person->GetBirthday().month << endl;
    cout << person->GetBirthday().year << endl;

    delete person;

    int stop;
    cin >> stop;
}