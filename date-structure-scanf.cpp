#include <iostream>
using namespace std;

int main()
{
	struct Date {
		int day, month, year;
	};

	Date inputDate;

	cout << " Enter the date (DD/MM/YYYY): ";
	scanf_s("%d/%d/%d", &inputDate.day, &inputDate.month, &inputDate.year);

	// Displaying Date
	cout << " Day: " << inputDate.day << endl;
	cout << " Month: " << inputDate.month << endl;
	cout << " Year: " << inputDate.year << endl;

	return 0;
}


