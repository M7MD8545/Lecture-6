#include <iostream>
using namespace std;


int main()
{
	int battery = 100;
	int tasks;
	cout << "Enter how many tasks: ";
	cin >> tasks;
	for (int i = 0; i < tasks; i++) {
		cout << "Enter the battery cost of that task: ";
		int x;
		cin >> x;
		battery = battery - x;
		if (battery <= 0) {
			cout << "Robot Out of Power!" << endl;
		}
		else {
			cout << "The remaining battery: " << battery << "%" << endl;
		}
	}
	
	if (battery <= 20) {
		cout << "Battery Critical" << endl;
	}
	else if (battery <= 50) {
		cout << "Battery Low" << endl;
	}
	else {
		cout << "Battery Healthy" << endl;
	}
	return 0;
}