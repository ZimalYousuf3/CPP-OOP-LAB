#include <iostream>
#include <string>
using namespace std;

class Date {

private:
    int day, month, year;

public:
	string months[12] = { "January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };

    // Setter for day
	void setDay(int day)
	{
		if (day >= 1 && day <= 31)
		{
			this->day = day;
		}
		else
		{
			cout << "Invalid day. Setting day to Monday." << endl;
			this->day = 1;
		}

	}

	// Getter for day
	int getDay() { return day; }

	// Setter for month
	void setMonth(int month) 
		{
		if (month >= 1 && month <= 12)
		{
			this->month = month;
		}
		else
		{
			cout << "Invalid month. Setting month to January." << endl;
			this->month = 1;
		}
	}

	// Getter for month
	int getMonth() { return month; }

	// Setter for year
	void setYear(int year)
	{
		if (year >= 1)
		{
			this->year = year;
		}
		else
		{
			cout << "Invalid year. Setting year to 2026. " << endl;
			this->year = 2026;
		}
	}

	// Getter for year
	int getYear() { return year; }

// Function to display date in 12/25/2014 format
	void displayNumericDate()
	{
		cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
	}

// Function to display date in December 25, 2014 format
	void displayMonthDayYear()
	{
		cout << months[getMonth() - 1] << " " << getDay() << ", " << getYear() << endl;
	}

// Function to display date in 25 December 2014 format
	void displayDayMonthYear()
	{
		cout << getDay() << " " << months[getMonth() - 1] << " " << getYear() << endl;
	}

};

int main()
{
	Date date;
	int day, month, year;

	// Input Date Information
	cout << " Enter Day: ";
	cin >> day;
	date.setDay(day);

	cout << " Enter Month: ";
	cin >> month;
	date.setMonth(month);

	cout << " Enter Year: ";
	cin >> year;
	date.setYear(year);
	
	// Display Date in Different Formats
	cout << " Date in Numeric Format: ";
	date.displayNumericDate();

	cout << " Date in Month Day, Year Format: ";
	date.displayMonthDayYear();

	cout << " Date in Day Month Year Format: ";
	date.displayDayMonthYear();


	return 0;
}

