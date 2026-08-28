#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    string University;
public:
    void setUniversity(string University) {
        this->University = University;
    }
    string getUniversity() {
        return University;
    }
    void information() {
        Person::information();
        cout << "Enter your University: ";
        cin >> University;
    }
    void print() {
        Person::print();
        cout << "The University is: " << University << endl;
    }
};

