#include <iostream>
#include <string>
using namespace std;

struct Distance {
	int feet;
	float inches;
};

struct Triangle {
	Distance base;
	Distance height;
};

int main()
{
	Triangle t;

	cout << " Enter base in inches: ";
	cin >> t.base.inches;

	cout << " Enter base in feet: ";
	cin >> t.base.feet;

	cout << " Enter height in inches: ";
	cin >> t.height.inches;

	cout << " Enter height in feet: ";
	cin >> t.height.feet;

	float baseInInches = (t.base.feet * 12) + t.base.inches;
	float heightInInches = (t.height.feet * 12) + t.height.inches;

	float area = 0.5 * (baseInInches * heightInInches);

	cout << " Area of triangle: " << area ;

	return 0;
}



