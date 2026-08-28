#include <iostream>
using namespace std;


int main()
{
	int attempts = 3;
	int code;
	int secretCode = 7777;
	while (attempts >= 0) {
		cout << "Enter the code: ";
		cin >> code;
		if (code == secretCode) {
			cout << "Safe Unlocked!" << endl;
		}
		else {
			attempts--;
			cout << "Attemts remain: " << attempts << endl;
			cout << "Try again" << endl;
			if (code > secretCode) {
				cout << "too high" << endl;
			}
			else if (code < secretCode) {
				cout << "too low" << endl;
			}
		}
		if (attempts == 0) {
			cout << "Safe Locked!" << endl;
			break;
		}
	}
	
	return 0;
}
