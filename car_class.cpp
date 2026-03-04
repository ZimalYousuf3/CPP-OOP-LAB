#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int yearModel;
	string Company;
	int Speed;

public:

	// Setter Functions
	void setYearModel(int y)
	{
		yearModel = y;
	}

	void setCompany(string c)
	{
		Company = c;
	}

	void setSpeed(int s)
	{
		Speed = s;
	}

	// Getter Functions
	int getYearModel()
	{
		return yearModel;
	}

	string getCompany()
	{
		return Company;
	}

	int getSpeed()
	{
		return Speed;
	}

	void accelerate()
	{
		Speed += 5;
	}

	void brake()
	{
		Speed -= 5;
	}

};

int main()
{
	int yearModel;
	string Company;
	int Speed;

	Car car;
	cout << " ============= Car Details ============= " << endl;
	cout << " Enter the year model of the car: ";
	cin >> yearModel;
	car.setYearModel(yearModel);

	cout << " Enter the company of the car: ";
	cin >> Company;
	car.setCompany(Company);

	cout << " Enter the speed of the car: ";
	cin >> Speed;
	car.setSpeed(Speed);
	cout << " ======================================= " << endl;

	cout << " Increasing Car Speed.... " << endl;
	for (int i = 0; i < 5; i++)
	{
		car.accelerate();
		cout << " Current Speed: " << car.getSpeed() << " km/h " << endl;
	}
	cout << endl;

	cout << " Decreasing Car Speed.... " << endl;
	for (int i = 0; i < 5; i++)
	{
		car.brake();
		cout << " Current Speed: " << car.getSpeed() << " km/h " << endl;
	}

    return 0;
}

