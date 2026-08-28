#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
	string gender;
	string address;
	string phoneNumber;
	string email;
	int id;
public:
	Person() {
		name = "No Name";
		age = 0;
		gender = "No Gender";
		address = "No Address";
		phoneNumber = "No Phone Number";
		email = "No Email";
		id = 0;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setGender(string gender) {
		this->gender = gender;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void setPhoneNumber(string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}
	void setEmail(string email) {
		this->email = email;
	}
	void setID(int id) {
		this->id = id;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getGender() {
		return gender;
	}
	string getAddress() {
		return address;
	}
	string getPhoneNumber() {
		return phoneNumber;
	}
	string getEmail() {
		return email;
	}
	int getID() {
		return id;
	}
	void information() {
		cout << "Enter the name: ";
		cin >> name;
		cout << "Enter the age: ";
		cin >> age;
		cout << "Enter the gender: ";
		cin >> gender;
		cout << "Enter the address: ";
		cin >> address;
		cout << "Enter the phoneNumber: ";
		cin >> phoneNumber;
		cout << "Enter the email: ";
		cin >> email;
		cout << "Enter the id: ";
		cin >> id;
	}
	void print() {
		cout << "The name: " << name << endl;
		cout << "The age: " << age << endl;
		cout << "The gender: " << gender << endl;
		cout << "The address: " << address << endl;
		cout << "The phoneNumber: " << phoneNumber << endl;
		cout << "The email: " << email << endl;
		cout << "The id: " << id << endl;
	}
};

