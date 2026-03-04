#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
	float inches;

public:
    // Setter Functions
    void setFeet(int f)
    {
        feet = f;
	}

    void setInches(float i)
    {
        inches = i;
    }

	// Getter Functions
    int getFeet()
    {
        return feet;
    }

    float getInches()
    {
        return inches;
	}

    // Function to display distance
    void showDistance()
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
	}
};


int main()
{
	Distance d;
    int feet;
    float inches;

	// Get distance from user
	cout << "Enter distance in feet: ";
	cin >> feet;
	d.setFeet(feet);

	cout << "Enter distance in inches: ";
	cin >> inches;
	d.setInches(inches);

	// Display the distance
	d.showDistance();

    return 0;
}

