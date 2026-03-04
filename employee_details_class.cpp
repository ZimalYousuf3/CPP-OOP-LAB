#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string Name;
	int ID_Number;
	string Department;
	string Position;

public:
	// Setter Functions
	void setName(string name)
	{
		Name = name;
	}

	void setID_Number(int id)
	{
		ID_Number = id;
	}

	void setDepartment(string department)
	{
		Department = department;
	}

	void setPosition(string position)
	{
		Position = position;
	}

	// Getter Functions
	string getName()
	{
		return Name;
	}

	int getID_Number()
	{
		return ID_Number;
	}

	string getDepartment()
	{
		return Department;
	}

	string getPosition()
	{
		return Position;
	}

	void displayEmployeeDetails()
	{
		cout << " Employee Name: " << Name << endl;
		cout << " ID Number: " << ID_Number << endl;
		cout << " Department: " << Department << endl;
		cout << " Position: " << Position << endl;
	}

};

int main()
{
	string Name;
	int ID_Number;
	string Department;
	string Position;
	
	Employee emp1;
	cout << "=============== Enter 3 Employee Details ==============" << endl;
	cout << " Employee 1: " << endl;
	cout << " Enter Name: ";
	getline(cin, Name);
	emp1.setName(Name);

	cout << " Enter ID Number: ";
	cin >> ID_Number;
	cin.ignore(); 
	emp1.setID_Number(ID_Number);

	cout << " Enter Department: ";
	getline(cin, Department);
	emp1.setDepartment(Department);

	cout << " Enter Position: ";
	getline(cin, Position);
	emp1.setPosition(Position);
	
	cout << "-------------------------------------------------------" << endl;

	Employee emp2;
	cout << " Employee 2: " << endl;
	cout << " Enter Name: ";
	getline(cin, Name);
	emp2.setName(Name);

	cout << " Enter ID Number: ";
	cin >> ID_Number;
	cin.ignore();
	emp2.setID_Number(ID_Number);

	cout << " Enter Department: ";
	getline(cin, Department);
	emp2.setDepartment(Department);

	cout << " Enter Position: ";
	getline(cin, Position);
	emp2.setPosition(Position);

	cout << "-------------------------------------------------------" << endl;

	Employee emp3;
	cout << " Employee 3: " << endl;
	cout << " Enter Name: ";
	getline(cin, Name);
	emp3.setName(Name);

	cout << " Enter ID Number: ";
	cin >> ID_Number;
	cin.ignore();
	emp3.setID_Number(ID_Number);

	cout << " Enter Department: ";
	getline(cin, Department);
	emp3.setDepartment(Department);

	cout << " Enter Position: ";
	getline(cin, Position);
	emp3.setPosition(Position);
	
	cout << "=======================================================" << endl;

	cout << "============= Displaying Employee Details =============" << endl;
	cout << " Employee 1: " << endl;
	emp1.displayEmployeeDetails();
	cout << "-------------------------------------------------------" << endl;
	cout << " Employee 2: " << endl;
	emp2.displayEmployeeDetails();
	cout << "-------------------------------------------------------" << endl;
	cout << " Employee 3: " << endl;
	emp3.displayEmployeeDetails();
	cout << "=======================================================" << endl;
    return 0;
}

