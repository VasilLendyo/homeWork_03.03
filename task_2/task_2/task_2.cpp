#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter the size of cell: ";
	cin >> size;
	for (int q = 1; q <= 4; q++) {
		for (int k = 1; k <= 8; k++) {
			for (int i = 1; i <= size; i++) {
				cout << "*";
			}
			for (int j = 1; j <= size; j++) {
				cout << "_";
			}
		}
		cout << endl;
		cout << endl;
	}
	cout << endl;
	for (int w = 1; w <= 4; w++) {
		for (int l = 1; l <= 8; l++) {
			for (int p = 1; p <= size; p++) {
				cout << "_";
			}
			for (int o = 1; o <= size; o++) {
				cout << "*";
			}
		}
		cout << endl;
		cout << endl;
	}
}