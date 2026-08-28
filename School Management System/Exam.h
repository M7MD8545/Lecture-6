#pragma once
#include <iostream>
using namespace std;

class Exam
{
private:
	string examName;
	string courseCode;
	string examDate;
public:
	void setExamName(string examName) {
		this->examName = examName;
	}
	void setCourseCode(string courseCode) {
		this->courseCode = courseCode;
	}
	void setExamDate(string examDate) {
		this->examDate = examDate;
	}
	string getExamName() {
		return examName;
	}
	string getCourseCode() {
		return courseCode;
	}
	string getExamDate() {
		return examDate;
	}
	void information() {
		cout << "Enter The Exam Name: ";
		cin >> examName;
		cout << "Enter The Course Code: ";
		cin >> courseCode;
		cout << "Enter The Exam Date: ";
		cin >> examDate;
	}
	void print() {
		cout << "The Exam Name: " << examName << endl;
		cout << "The Course Code: " << courseCode << endl;
		cout << "The Exam Date: " << examDate << endl;
	}
};

