#include <iostream>
#include <string>
using namespace std;

struct Time {
	int hours, mins;
};

struct Work {
	int EmpID;
	string day;
	Time working_time;
};

int main()
{
	const int week = 5;
	Work employee[week];
	const int wage_per_hour = 11;
	float totalHours = 0;
	float totalWage = 0;

	for (int i = 0; i < week; i++)
	{
		cout << " Enter employee ID: ";
		cin >> employee[i].EmpID;

		cout << " Enter the day: ";
		cin >> employee[i].day;

		cout << " Enter work hours: ";
		cin >> employee[i].working_time.hours;

		cout << " Enter work minutes: ";
		cin >> employee[i].working_time.mins;

		float dayHours = employee[i].working_time.hours + (employee[i].working_time.mins / 60.0);
		totalHours += dayHours;

		totalWage = wage_per_hour * totalHours;

		cout << " ------------------------------------ " << endl;
	}

	cout << " Total Wage of Employee : " << totalWage << " euros. ";

	return 0;
}


