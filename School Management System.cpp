#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"
#include "Exam.h"
#include "School.h"
using namespace std;

int main()
{
    int home;
    School s;
    do {
        cout << "Enter 1 to School" << endl;
        cout << "Enter 2 to Students" << endl;
        cout << "Enter 3 to Teachers" << endl;
        cout << "Enter 4 to Staffs" << endl;
        cout << "Enter 5 to Courses" << endl;
        cout << "Enter 6 to Classrooms" << endl;
        cout << "Enter 7 to Exams" << endl;
        cout << "Enter 0 to Exit" << endl;
        cin >> home;
        system("cls");
        switch (home) {
        case 0:
            cout << "The program end" << endl;
            break;
        case 1:
            cout << "Enter 1 to add school" << endl;
            cout << "Enter 2 to print school information" << endl;
            system("cls");
            int school;
            cin >> school;
            switch (school) {
            case 1:
                s.schoolInformation();
                system("pause");
                continue;
                break;
                system("cls");
            case 2:
                s.printSchoolInformation();
                system("pause");
                continue;
                break;
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 2:
            cout << "Enter 1 to add a student" << endl;
            cout << "Enter 2 to print a student" << endl;
            cout << "Enter 3 to print all students" << endl;
            cout << "Enter 4 to delete a student" << endl;
            int student;
            cin >> student;
            switch (student) {
            case 1:
                s.addStudent();
                system("pause");
                continue;
                break;
            case 2:
                cout << "Enter student id to print: ";
                int studentIDprint;
                cin >> studentIDprint;
                s.printOneStudent(studentIDprint);
                system("pause");
                continue;
                break;
            case 3:
                s.printStudents();
                system("pause");
                continue;
                break;
            case 4:
                cout << "Enter student id to delete: ";
                int studentIDremove;
                cin >> studentIDremove;
                s.deleteStudent(studentIDremove);
                system("pause");
                continue;
                break;
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 3:
            cout << "Enter 1 to add a Teacher" << endl;
            cout << "Enter 2 to print a Teacher" << endl;
            cout << "Enter 3 to print all Teachers" << endl;
            cout << "Enter 4 to delete a Teacher" << endl;
            int Teacher;
            cin >> Teacher;
            switch (Teacher) {
            case 1:
                s.addTeacher();
                system("pause");
                continue;
                break;
            case 2:
                cout << "Enter Teacher id to print: ";
                int TeacherIDprint;
                cin >> TeacherIDprint;
                s.printOneTeacher(TeacherIDprint);
                system("pause");
                continue;
                break;
            case 3:
                s.printTeachers();
                system("pause");
                continue;
                break;
            case 4:
                cout << "Enter Teacher id to delete: ";
                int TeacherIDremove;
                cin >> TeacherIDremove;
                s.deleteTeacher(TeacherIDremove);
                system("pause");
                continue;
                break;
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 4:
            cout << "Enter 1 to add a Staff" << endl;
            cout << "Enter 2 to print a Staff" << endl;
            cout << "Enter 3 to print all Staffs" << endl;
            cout << "Enter 4 to delete a Staff" << endl;
            int Staff;
            cin >> Staff;
            switch (Staff) {
            case 1:
                s.addStaff();
                system("pause");
                continue;
                break;
            case 2:
                cout << "Enter Staff id to print: ";
                int StaffIDprint;
                cin >> StaffIDprint;
                s.printOneStaff(StaffIDprint);
                system("pause");
                continue;
                break;
            case 3:
                s.printStaffs();
                system("pause");
                continue;
                break;
            case 4:
                cout << "Enter Staff id to delete: ";
                int StaffIDremove;
                cin >> StaffIDremove;
                s.deleteStaff(StaffIDremove);
                system("pause");
                continue;
                break;
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 5:
            cout << "Enter 1 to add a Course" << endl;
            cout << "Enter 2 to print a Course" << endl;
            cout << "Enter 3 to print all Courses" << endl;
            cout << "Enter 4 to delete a Course" << endl;
            int Course;
            cin >> Course;
            switch (Course) {
            case 1:
                s.addCourse();
                system("pause");
                continue;
                break;
            case 2: {
                cout << "Enter Course id to print: ";
                string CourseIDprint;
                cin >> CourseIDprint;
                s.printOneCourse(CourseIDprint);
                system("pause");
                continue;
                break;
            }
            case 3:
                s.printCourses();
                system("pause");
                continue;
                break;
            case 4: {
                cout << "Enter Course id to delete: ";
                string CourseIDremove;
                cin >> CourseIDremove;
                s.deleteCourse(CourseIDremove);
                system("pause");
                continue;
                break;
            }
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 6:
            cout << "Enter 1 to add a Classroom" << endl;
            cout << "Enter 2 to print a Classroom" << endl;
            cout << "Enter 3 to print all Classrooms" << endl;
            cout << "Enter 4 to delete a Classroom" << endl;
            int Classroom;
            cin >> Classroom;
            switch (Classroom) {
            case 1:
                s.addClassroom();
                system("pause");
                continue;
                break;
            case 2: 
                cout << "Enter Classroom id to print: ";
                int ClassroomIDprint;
                cin >> ClassroomIDprint;
                s.printOneClassroom(ClassroomIDprint);
                system("pause");
                continue;
                break;
            case 3:
                s.printClassrooms();
                system("pause");
                continue;
                break;
            case 4: 
                cout << "Enter Classroom id to delete: ";
                int ClassroomIDremove;
                cin >> ClassroomIDremove;
                s.deleteClassroom(ClassroomIDremove);
                system("pause");
                continue;
                break;
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        case 7:
            cout << "Enter 1 to add a Exam" << endl;
            cout << "Enter 2 to print a Exam" << endl;
            cout << "Enter 3 to print all Exams" << endl;
            cout << "Enter 4 to delete a Exam" << endl;
            int Exam;
            cin >> Exam;
            switch (Exam) {
            case 1:
                s.addExam();
                system("pause");
                continue;
                break;
            case 2: {
                cout << "Enter Exam id to print: ";
                string ExamIDprint;
                cin >> ExamIDprint;
                s.printOneExam(ExamIDprint);
                system("pause");
                continue;
                break;
            }
            case 3:
                s.printExams();
                system("pause");
                continue;
                break;
            case 4: {
                cout << "Enter Exam id to delete: ";
                string ExamIDremove;
                cin >> ExamIDremove;
                s.deleteExam(ExamIDremove);
                system("pause");
                continue;
                break;
            }
            default:
                cout << "Please Enter a number" << endl;
                system("pause");
                continue;
                break;
            }
            system("cls");
        }
        
    } while (home != 0);

    
}