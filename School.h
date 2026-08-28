#pragma once
#include <iostream>
using namespace std;

class School
{
private:
	string schoolName;
	string address;
	string principalName;
	Student students[1000];
	Teacher teachers[50];
	Staff staffs[50];
	Course courses[10];
	Classroom classrooms[40];
	Exam exams[6];
	int studentCounter = 0;
	int teacherCounter = 0;
	int staffCounter = 0;
	int courseCounter = 0;
	int classroomCounter = 0;
	int examCounter = 0;

public:
	School() {
		schoolName = "No School Name";
		address = "No Address";
		principalName = "No Principal Name";
	}
	//School
	void schoolInformation() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The School Information*" << endl;
		cout << "Enter The School Name: ";
		cin >> schoolName;
		cout << "Enter The School Address: ";
		cin >> address;
		cout << "Enter The Principal Name: ";
		cin >> principalName;
	}
	void printSchoolInformation() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The School Information*" << endl;
		cout << "The School Name: " << schoolName << endl;
		cout << "The School Address: " << address << endl;
		cout << "The Principal Name: " << principalName << endl;
	}
	//Student
	void addStudent() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Student " << studentCounter + 1 << " Information*" << endl;
		Student s;
		s.information();
		students[studentCounter] = s;
		studentCounter++;
	}
	void printStudents() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Students Information*" << endl;
		for (int i = 0; i < studentCounter; i++) {
			cout << "Student " << i + 1 << " : " << endl;
			cout << endl;
			students[i].print();
			cout << endl;
		}
	}
	void printOneStudent(int studentID) {
		bool found = false;
		for (int i = 0; i < studentCounter; i++) {
			if (students[i].getID() == studentID) {
				cout << "\t\t\t\t\t\t*The Student " << studentID << " information*" << endl;
				students[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Student not found" << endl;
		}
	}
	void deleteStudent(int studentID) {
		int target = -1;
		for (int i = 0; i < studentCounter; i++) {
			if (students[i].getID() == studentID) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			studentCounter--;
			cout << "Student deleted" << endl;
			for (int i = target; i < studentCounter; i++) {
				this->students[i] = students[i + 1];
			}
		}
		else {
			cout << "Student not found" << endl;
		}
	}
	//Teacher
	void addTeacher() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Teacher " << teacherCounter + 1 << " Information*" << endl;
		Teacher t;
		t.information();
		teachers[teacherCounter] = t;
		teacherCounter++;
	}
	void printTeachers() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Teachers Information*" << endl;
		for (int i = 0; i < teacherCounter; i++) {
			cout << "Teacher " << i + 1 << " : " << endl;
			cout << endl;
			teachers[i].print();
			cout << endl;
		}
	}
	void printOneTeacher(int teacherID) {
		bool found = false;
		for (int i = 0; i < teacherCounter; i++) {
			if (teachers[i].getID() == teacherID) {
				cout << "\t\t\t\t\t\t*The Student " << teacherID << " information*" << endl;
				teachers[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Teacher not found" << endl;
		}
	}
	void deleteTeacher(int teacherID) {
		int target = -1;
		for (int i = 0; i < teacherCounter; i++) {
			if (teachers[i].getID() == teacherID) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			teacherCounter--;
			cout << "Teacher deleted" << endl;
			for (int i = target; i < teacherCounter; i++) {
				this->teachers[i] = teachers[i + 1];
			}
		}
		else {
			cout << "Teacher not found" << endl;
		}
	}
	//Staff
	void addStaff() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Staff " << staffCounter + 1 << " Information*" << endl;
		Staff s;
		s.information();
		staffs[staffCounter] = s;
		staffCounter++;
	}
	void printStaffs() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Staffs Information*" << endl;
		for (int i = 0; i < staffCounter; i++) {
			cout << "Staff " << i + 1 << " : " << endl;
			cout << endl;
			staffs[i].print();
			cout << endl;
		}
	}
	void printOneStaff(int staffID) {
		bool found = false;
		for (int i = 0; i < staffCounter; i++) {
			if (staffs[i].getID() == staffID) {
				cout << "\t\t\t\t\t\t*The Staff " << staffID << " information*" << endl;
				staffs[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Staff not found" << endl;
		}
	}
	void deleteStaff(int staffID) {
		int target = -1;
		for (int i = 0; i < staffCounter; i++) {
			if (staffs[i].getID() == staffID) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			staffCounter--;
			cout << "Staff deleted" << endl;
			for (int i = target; i < staffCounter; i++) {
				this->staffs[i] = staffs[i + 1];
			}
		}
		else {
			cout << "Staff not found" << endl;
		}
	}
	//Course
	void addCourse() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Course " << courseCounter + 1 << " Information*" << endl;
		Course c;
		c.information();
		courses[courseCounter] = c;
		courseCounter++;
	}
	void printCourses() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Courses Information*" << endl;
		for (int i = 0; i < courseCounter; i++) {
			cout << "Course " << i + 1 << " : " << endl;
			cout << endl;
			courses[i].print();
			cout << endl;
		}
	}
	void printOneCourse(string courseCode) {
		bool found = false;
		for (int i = 0; i < courseCounter; i++) {
			if (courses[i].getCourseCode() == courseCode) {
				cout << "\t\t\t\t\t\t*The Student " << courseCode << " information*" << endl;
				courses[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Course not found" << endl;
		}
	}
	void deleteCourse(string courseCode) {
		int target = -1;
		for (int i = 0; i < courseCounter; i++) {
			if (courses[i].getCourseCode() == courseCode) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			courseCounter--;
			cout << "Course deleted" << endl;
			for (int i = target; i < courseCounter; i++) {
				this->courses[i] = courses[i + 1];
			}
		}
		else {
			cout << "Course not found" << endl;
		}
	}
	//Classroom
	void addClassroom() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Classroom " << classroomCounter + 1 << " Information*" << endl;
		Classroom c;
		c.information();
		classrooms[classroomCounter] = c;
		classroomCounter++;
	}
	void printClassrooms() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Classrooms Information*" << endl;
		for (int i = 0; i < classroomCounter; i++) {
			cout << "Classroom " << i + 1 << " : " << endl;
			cout << endl;
			classrooms[i].print();
			cout << endl;
		}
	}
	void printOneClassroom(int classroomNum) {
		bool found = false;
		for (int i = 0; i < classroomCounter; i++) {
			if (classrooms[i].getRoomNumber() == classroomNum) {
				cout << "\t\t\t\t\t\t*The Student " << classroomNum << " information*" << endl;
				classrooms[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Classroom not found" << endl;
		}
	}
	void deleteClassroom(int classroomID) {
		int target = -1;
		for (int i = 0; i < classroomCounter; i++) {
			if (classrooms[i].getRoomNumber() == classroomID) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			classroomCounter--;
			cout << "Classroom deleted" << endl;
			for (int i = target; i < classroomCounter; i++) {
				this->classrooms[i] = classrooms[i + 1];
			}
		}
		else {
			cout << "Classroom not found" << endl;
		}
	}
	// Exam
	void addExam() {
		cout << endl;
		cout << "\t\t\t\t\t\t*Enter The Exam " << examCounter + 1 << " Information*" << endl;
		Exam e;
		e.information();
		exams[examCounter] = e;
		examCounter++;
	}
	void printExams() {
		cout << endl;
		cout << "\t\t\t\t\t\t*The Exams Information*" << endl;
		for (int i = 0; i < examCounter; i++) {
			cout << "Exam " << i + 1 << " : " << endl;
			cout << endl;
			exams[i].print();
			cout << endl;
		}
	}
	void printOneExam(string courseCode) {
		bool found = false;
		for (int i = 0; i < examCounter; i++) {
			if (exams[i].getCourseCode() == courseCode) {
				cout << "\t\t\t\t\t\t*The Exam " << courseCode << " information*" << endl;
				exams[i].print();
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Exam not found" << endl;
		}
	}
	void deleteExam(string courseCode) {
		int target = -1;
		for (int i = 0; i < examCounter; i++) {
			if (exams[i].getCourseCode() == courseCode) {
				target = i;
				break;
			}
		}
		if (target != -1) {
			examCounter--;
			cout << "Exam deleted" << endl;
			for (int i = target; i < examCounter; i++) {
				this->exams[i] = exams[i + 1];
			}
		}
		else {
			cout << "Exam not found" << endl;
		}
	}
};

