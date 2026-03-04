#include <iostream>
#include <string>
using namespace std;

struct Employee {
	int empNumber;
	float empCompensation;
};

void display(Employee emp)
{
	cout << " Employee No: " << emp.empNumber << endl;
	cout << " Employee Compensation: " << emp.empCompensation << endl;
}

int main()
{
	Employee emp1, emp2, emp3;

	cout << "-----------------------------------" << endl;
	cout << "     Details for Employee - 1 " << endl;
	cout << "-----------------------------------" << endl;

	cout << " Enter Employee No: ";
	cin >> emp1.empNumber;
	cout << " Enter Employee Compensation: ";
	cin >> emp1.empCompensation;

	cout << "-----------------------------------" << endl;
	cout << "     Details for Employee - 2 " << endl;
	cout << "-----------------------------------" << endl;

	cout << " Enter Employee No: ";
	cin >> emp2.empNumber;
	cout << " Enter Employee Compensation: ";
	cin >> emp2.empCompensation;

	cout << "-----------------------------------" << endl;
	cout << "     Details for Employee - 3 " << endl;
	cout << "-----------------------------------" << endl;

	cout << " Enter Employee No: ";
	cin >> emp3.empNumber;
	cout << " Enter Employee Compensation: ";
	cin >> emp3.empCompensation;

	cout << "-----------------------------------" << endl;

	cout << "====================================" << endl;
	cout << "  Displaying Details for Employees " << endl;
	cout << "====================================" << endl;
	display(emp1);
	display(emp2);
	display(emp3);
	cout << "====================================" << endl;
	return 0;
}

