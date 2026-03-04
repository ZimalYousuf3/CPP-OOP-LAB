#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int idNumber;
	string department;
	string position;

public:

	// Full Constructor 
	Employee(string n, int id, string dept, string pos)
	{
		name = n;
		idNumber = id;
		department = dept;
		position = pos;
	}

	// Partial Constructor
	Employee(string n, int id)
	{
		name = n;
		idNumber = id;
		department = "";
		position = "";
	}

	// Default Constructor 
	Employee()
	{
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}

	// Setter Functions
	void setName(string n) { name = n; }
	void setIdNumber(int id) { idNumber = id; }
	void setDepartment(string dept) { department = dept; }
	void setPosition(string pos) { position = pos; }

	// Getter Functions
	string getName()
	{
		return name;
	}

	int getIdNumber()
	{
		return idNumber;
	}

	string getDepartment()
	{
		return department;
	}

	string getPosition()
	{
		return position;
	}

};

int main()
{
	string name;
	int idNumber;
	string department;
	string position;

	// Input Employee Information
	cout << "============= Enter Employee Information ============== " << endl;
	cout << " Enter Employee Name: ";
	getline(cin, name);

	cout << " Enter Employee ID Number: ";
	cin >> idNumber;
	cin.ignore();

	cout << " Enter Employee Department: ";
	getline(cin, department);

	cout << " Enter Employee Position: ";
	getline(cin, position);
	cout << "======================================================= " << endl;

	// Create Employee Objects
	Employee emp1 = Employee(name, idNumber, department, position);
	Employee emp2 = Employee(name, idNumber);
	Employee emp3 = Employee();

	// Display Employee Information
	cout << "================ Employee Information ================= " << endl;

	cout << " Enter Employee Name: " << emp1.getName() << endl ;
	cout << " Enter Employee ID Number: " << emp1.getIdNumber() << endl;
	cout << " Enter Employee Department: " << emp1.getDepartment() << endl;
	cout << " Enter Employee Position: " << emp1.getPosition() << endl;

	cout << "---------------------------------------------------" << endl;

	cout << " Enter Employee Name: " << emp2.getName() << endl;
	cout << " Enter Employee ID Number: " << emp2.getIdNumber() << endl;
	cout << " Enter Employee Department: " << emp2.getDepartment() << endl;
	cout << " Enter Employee Position: " << emp2.getPosition() << endl;

	cout << "---------------------------------------------------" << endl;

	cout << " Enter Employee Name: " << emp3.getName() << endl;
	cout << " Enter Employee ID Number: " << emp3.getIdNumber() << endl;
	cout << " Enter Employee Department: " << emp3.getDepartment() << endl;
	cout << " Enter Employee Position: " << emp3.getPosition() << endl;

	cout << "====================================================== " << endl;

	return 0;
}


