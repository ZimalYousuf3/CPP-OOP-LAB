#include <iostream>
#include <string>
using namespace std;

struct Student {
	int studentID;
	char studentName[40];
	char coursecode[10];
	char courseName[20];
	int courseMarks;
};

int main()
{
	Student s1 = { 20 , "Ahmed" , "02" , "Programming" , 7 };

	cout << " Student ID: " << s1.studentID << endl;
	cout << " Student Name: " << s1.studentName << endl;
	cout << " Course Code: " << s1.coursecode << endl;
	cout << " Course Name: " << s1.courseName << endl;
	cout << " Course Marks: " << s1.courseMarks << endl;

	return 0;
}

