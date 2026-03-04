#include <iostream>
#include <string>
using namespace std;

struct Student {
	int studentID;
	char studentName[40];
	char courseID[10];
	int courseMarks;
};

int main()
{
	// Creating Instances
	Student s1 = { 20 , "Ahmad" , "CS-201" , 17 };
	Student s2 = { 21 , "Hassan" , "CS-201" , 18 };
	Student s3 = { 22 , "Jamil" , "CS-201" , 19 };
	Student s4 = { 23 , "Umair" , "CS-201" , 13 };

	// Calculating total marks
	double total_marks = s1.courseMarks + s2.courseMarks + s3.courseMarks + s4.courseMarks;

	// Displaying Total Marks
	cout << " Total Marks: " << total_marks;

	return 0;
}

