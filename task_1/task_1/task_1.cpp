#include <iostream>
using namespace std;

int main() {
	int number, digitCount = 0, sum = 0, zeroCount = 0;

	cout << "Enter a number: ";
	cin >> number;

	//Визачаємо кількість цифр і їхню суму
	while (number != 0) {
		int digit = number % 10;
		digitCount++;
		sum += digit;
		if (digit == 0) {
			zeroCount++;
		}
		number /= 10;
	}

	//Обчислення середнього арифметичного
	double average = (double)sum / digitCount;

	//Меню
	int choice = 0;
	cout << "Choose an operation:" << endl;
	cout << "1.Number of digits" << endl;
	cout << "2.Sum of digits" << endl;
	cout << "3.Average of digits" << endl;
	cout << "4.Number of zeros" << endl;
	cout << "5.Exit" << endl;

	while (choice != 5) {
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Number of digits: " << digitCount << endl;
			break;
		case 2:
			cout << "Sum of digits: " << sum << endl;
			break;
		case 3:
			cout << "Average of digits: " << average << endl;
			break;
		case 4:
			cout << "Number of zeros: " << zeroCount << endl;
			break;
		case 5:
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	}
}
