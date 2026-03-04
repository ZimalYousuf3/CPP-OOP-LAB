#include <iostream>
using namespace std;

class Circle
{
    private:
		double radius;
		const double pi = 3.14159;

    public:
		// Default constructor
        Circle ()
        {
            radius = 0.0;
		}
 
		// Parameterized constructor
        Circle(double radius)
        {
			this->radius = radius;
        }

        // Setter Function
        void setRadius(double radius)
        {
            this->radius = radius;
	    }

		// Getter Functions
        double getRadius()
        {
			return radius;
        }

        double getArea()
        {
            return pi * radius * radius;
        }

        double getCircumference()
        {
            return 2 * radius * radius;
        }

        double getDiameter()
        {
            return 2 * radius;
		}

};

int main()
{
    double radius;
    const double pi = 3.14159;

	cout << " Enter the radius of the circle: ";
	cin >> radius;
    cout << endl;

	// Using parameterized constructor
	Circle circle1 = Circle(radius);
	cout << " Radius of Circle: " << circle1.getRadius() << endl;
	cout << " Area of Circle: " << circle1.getArea() << endl;
    cout << " Diameter of Circle: " << circle1.getDiameter() << endl;
	cout << " Circumference of Circle: " << circle1.getCircumference() << endl;
    cout << endl;

	// Using default constructor 
	Circle circle2 = Circle();
	cout << " Radius of Circle: " << circle2.getRadius() << endl;
	cout << " Area of Circle: " << circle2.getArea() << endl;
	cout << " Diameter of Circle: " << circle2.getDiameter() << endl;
	cout << " Circumference of Circle: " << circle2.getCircumference() << endl;

    return 0;
}



