#pragma once
#include "Person.h"

class Teacher :
    public Person
{
private:
    string subjectSpecialization;
    float salary;
public:
    Teacher() {
        subjectSpecialization = "No Subject Specialization";
        salary = 0;
    }
    void setsubjectSpecialization(string subjectSpecialization) {
        this->subjectSpecialization = subjectSpecialization;
    }
    void setSalary(float salary) {
        this->salary = salary;
    }
    string getsubjectSpecialization() {
        return subjectSpecialization;
    }
    float getSalary() {
        return salary;
    }
    void information() {
        Person::information();
        cout << "Enter Subject Specialization: ";
        cin >> subjectSpecialization;
        cout << "Enter The Salary: ";
        cin >> salary;
    }
    void print() {
        Person::print();
        cout << "The Subject Specialization: " << subjectSpecialization << endl;
        cout << "The Salary: " << salary << endl;
    }
};

