#pragma once
#include "Person.h"

class Student :
    public Person
{
private:
    string gradeLevel;
    float GPA;
public:
    Student() {
        gradeLevel = "No Grade Level";
        GPA = 0;
    }
    void setGradeLevel(string gradeLevel) {
        this->gradeLevel = gradeLevel;
    }
    void setGPA(float GPA) {
        this->GPA = GPA;
    }
    string getGradeLevel() {
        return gradeLevel;
    }
    float getGPA() {
        return GPA;
    }
    void information() {
        Person::information();
        cout << "Enter Grade Level: ";
        cin >> gradeLevel;
        cout << "Enter GPA: ";
        cin >> GPA; 
    }
    void print() {
        Person::print();
        cout << "Grade Level: " << gradeLevel << endl;
        cout << "GPA: " << GPA << endl;
    }
    //friend void printOneStudent(int studentID);
};

