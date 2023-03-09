#include <iostream>
using namespace std;

int main() {
	//Запитуємо номер місяця та номер дня тижня для початку місяця
	int month, startingDay, daysInMonth;
	cout << "Input a month number(1-12) -> ";
	cin >> month;
	cout << "Input a number day of week (1-7) when that month started -> ";
	cin >> startingDay;

	cout << endl;
	//Визначаємо скільки днів місяця
	switch (month) {
	case 1:
		cout << "\t\t\tJanuary" << endl;
		daysInMonth = 31;
		break;
	case 2:
		cout << "\t\t\tFebruary" << endl;
		daysInMonth = 28;
		break;
	case 3:
		cout << "\t\t\tMarch" << endl;
		daysInMonth = 31;
		break;
	case 4:
		cout << "\t\t\tApril" << endl;
		daysInMonth = 30;
		break;
	case 5:
		cout << "\t\t\tMay" << endl;
		daysInMonth = 31;
		break;
	case 6:
		cout << "\t\t\tJune" << endl;
		daysInMonth = 30;
		break;
	case 7:
		cout << "\t\t\tJuly" << endl;
		daysInMonth = 31;
		break;
	case 8:
		cout << "\t\t\tAugust" << endl;
		daysInMonth = 31;
		break;
	case 9:
		cout << "\t\t\tSeptember" << endl;
		daysInMonth = 30;
		break;
	case 10:
		cout << "\t\t\tOctober" << endl;
		daysInMonth = 31;
		break;
	case 11:
		cout << "\t\t\tNovember" << endl;
		daysInMonth = 30;
		break;
	case 12:
		cout << "\t\t\tDecember" << endl;
		daysInMonth = 31;
		break;
	}

	//Виводимо заголовок календаря
	cout << "\tMo" << "\tTu" << "\tWe" << "\tTh" << "\tFr" << "\tSa" << "\tSu" << endl;

	//Визначаємо скільки порожніх місць містяться перед першим днем
	int daysBeforeMonth = startingDay - 1;
	//Виводимо риски перед першим днем місяця
	for (int i = 0; i < daysBeforeMonth; i++) {
		cout << "\t_";
	}

	//Виводимо дні місяця
	int dayOfWeek = daysBeforeMonth;
	int weekend = 0;
	for (int i = 1; i <= daysInMonth; i++) {
		cout << "\t" << i;
		//Якщо це останній день тижня, переходимо на новий рядок і підраховуємо к-сть вихідних
		if ((i + daysBeforeMonth) % 7 == 0) {
			cout << endl;
			weekend++;
		}
		if ((i + daysBeforeMonth) % 6 == 0) {
			weekend++;
		}
	}
	cout << endl;
	cout << "That month weekends is " << weekend - 1;
}
