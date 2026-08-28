#pragma once
#include <iostream>
using namespace std;

class Classroom
{
private:
	int roomNumber;
	int capacity;
public:
	Classroom() {
		roomNumber = 0;
		capacity = 0;
	}
	void setRoomNumber(int roomNumber) {
		this->roomNumber = roomNumber;
	}
	void setCapacity(int capacity) {
		this->capacity = capacity;
	}
	int getRoomNumber() {
		return roomNumber;
	}
	int getCapacity() {
		return capacity;
	}
	void information() {
		cout << "Enter The Room Number: ";
		cin >> roomNumber;
		cout << "Enter The Capacity: ";
		cin >> capacity;
	}
	void print() {
		cout << "The Room Number: " << roomNumber << endl;
		cout << "The Capacity: " << capacity << endl;
	}
};

