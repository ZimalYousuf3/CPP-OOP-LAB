#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentName;
	char studentRoll[20];
	double OOP;
	double DLD;
	double DS;
};

int main()
{
	double totalMarks = 0;
	Student student_data;

	cout << " ======================================== " << endl;
	cout << "               STUDENT DATA               " << endl;
	cout << " ======================================== " << endl;

	cout << " Enter Student's Name: ";
	cin.ignore();
	getline(cin, student_data.studentName);

	cout << " Enter Student's Roll No: ";
	cin >> student_data.studentRoll;

	cout << " Enter Student's OOP Marks: ";
	cin >> student_data.OOP;

	cout << " Enter Student's DLD Marks: ";
	cin >> student_data.DLD;

	cout << " Enter Student's DS Marks: ";
	cin >> student_data.DS;

	totalMarks = student_data.OOP + student_data.DLD + student_data.DS;

	cout << " ---------------------------------------- " << endl;
	cout << "            Calculated Marks              " << endl;
	cout << " ---------------------------------------- " << endl;

	cout << " OOP Marks: " << student_data.OOP << endl;
	cout << " OOP Marks: " << student_data.DLD << endl;
	cout << " OOP Marks: " << student_data.DS << endl;
	cout << " Total Marks: " << totalMarks << endl;

	cout << " ======================================== " << endl;

	return 0;
}
