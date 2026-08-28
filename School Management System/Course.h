#pragma once
#include <iostream>
using namespace std;

class Course
{
private:
	string courseCode;
	string courseName;
	string teacherName;
public:
	Course() {
		courseCode = "NO Course Code";
		courseName = "No Course Name";
		teacherName = "NO Teacher Name";
	}
	void setCourseCode(string courseCode) {
		this->courseCode = courseCode;
	}
	void setCourseName(string courseName) {
		this->courseName = courseName;
	}
	void setTeacherName(string teacherName) {
		this->teacherName = teacherName;
	}
	string getCourseCode() {
		return courseCode;
	}
	string getCourseName() {
		return courseName;
	}
	string getTeacherName() {
		return teacherName;
	}
	void information() {
		cout << "Enter The Course Code: ";
		cin >> courseCode;
		cout << "Enter The Course Name: ";
		cin >> courseName;
		cout << "Enter The Teacher Name: ";
		cin >> teacherName;
	}
	void print() {
		cout << "The Course Code: " << courseCode << endl;
		cout << "The Course Name: " << courseName << endl;
		cout << "The Teacher Name: " << teacherName << endl;
	}
};

