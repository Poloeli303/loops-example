#include<iostream>
using namespace std;
int input;

int main() {
	for (int i = 0; i < 80; i = i + 10) {
		cout << i << " ";
	}
	cout << endl;
	for (int k = 20; k >= -19; k--) {
		cout << k << " ";
	}
	cout << endl;
	for (int m = 3; m <= 1875; m = m * 5) {
		cout << m << " ";
	}
	cout << endl;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 8; j++)
			cout << "*";
		cout << endl;
	}
	cout << "Input any number." << endl;
	cin >> input;
	do {
		input--;
		cout << "fwuzzle" << endl;
	} while (input > 0);
}
