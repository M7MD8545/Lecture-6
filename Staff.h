#pragma once
#include "Person.h"

class Staff :
    public Person
{
private:
    string role;
    float salary;
public:
    Staff() {
        role = "No Role";
        salary = 0;
    }
    void getRole(string role) {
        this->role = role;
    }
    void getSalary(float salary) {
        this->salary = salary;
    }
    string setRole() {
        return role;
    }
    float setSalary() {
        return salary;
    }
    void information() {
        Person::information();
        cout << "Enter The Role: ";
        cin >> role;
        cout << "Enter The salary: ";
        cin >> salary;
    }
    void print() {
        Person::print();
        cout << "The Role: " << role << endl;
        cout << "The Salary: " << salary << endl;
    }
};

