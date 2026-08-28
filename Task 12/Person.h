#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void information() {
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your age: ";
		cin >> age;
	}
	void print() {
		cout << "The name is: " << name << endl;
		cout << "The age is: " << age << endl;
	}

};

