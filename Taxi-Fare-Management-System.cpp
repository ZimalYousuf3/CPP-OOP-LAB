#include <iostream>
using namespace std;

class TaxiFare {
private:
    double fare;
    double distance;
    double waitingTime;
    bool nightSurcharge;

public:

	// Parameterized Constructor
    TaxiFare(double fare = 0.0, double distance = 0.0, double waitingTime = 0.0, bool nightSurcharge = false) {
        this->fare = fare;
        this->distance = distance;
        this->waitingTime = waitingTime;
        this->nightSurcharge = nightSurcharge;
    }

	// Input validation function
    bool isValid(double value) {
        if (value >= 0) {
            return true;
        }
        return false;
    }

	// Overloaded functions to calculate fare based on distance only
    double calculateFare(double distance) {

        if (!isValid(distance)) {
            cout << " Invalid Distance! " << endl;
            return -1;
        }

        this->distance = distance;
        fare = distance * 20;
        cout << " Fare for distance only: Rs." << fare << endl;
    }

	// Overloaded functions to calculate fare based on distance and waiting time
    double calculateFare(double distance, double waitingTime) {

        if (!isValid(distance) || !isValid(waitingTime)) {
            cout << " Invalid Distance or Waiting Time! " << endl;
            return -1;
        }
        this->distance = distance;
        this->waitingTime = waitingTime;

        fare = (distance * 30) + (waitingTime * 5);
        cout << " Fare for distance & waiting time: Rs." << fare << endl;
    }

	// Overloaded functions to calculate fare based on distance, waiting time, and night surcharge
    double calculateFare(double distance, double waitingTime, bool nightSurcharge) {
        
        if (!isValid(distance) || !isValid(waitingTime)) {
            cout << " Invalid Distance or Waiting Time! " << endl;
            return -1;
        }

        this->distance = distance;
        this->waitingTime = waitingTime;

        fare = (distance * 30) + (waitingTime * 5);
        if (nightSurcharge) {
            fare += fare * 0.20;
        }
        cout << " Fare for distance, waiting time & night surcharge: Rs." << fare << endl;
    }

	// Overloading the + operator to combine two TaxiFare objects
    TaxiFare operator+ (const TaxiFare& obj) {
        TaxiFare combined;
        combined.fare = fare + obj.fare;
        combined.distance = distance + obj.distance;
		combined.waitingTime = waitingTime + obj.waitingTime;
        return combined;
    }

	// Overloading the == operator to compare two TaxiFare objects based on fare
    bool operator== (const TaxiFare& obj) const{
        return fare == obj.fare;
    }

    // Getters
    double getFare() {
        return fare;
    }

    double getDistance() {
        return distance;
	}
};

int main()
{
    TaxiFare Trip1, Trip2;
    int choice;
    double fare;
    double distance;
    double waitingTime;
    bool nightSurcharge;

    cout << " TRIP - 1 " << endl;
    // TRIP 1
    cout << "============== TaxiFare Management System ==============" << endl;
    cout << " 1. Calculate based on distance only " << endl;
    cout << " 2. Calculate based on distance and waiting time" << endl;
    cout << " 3. Calculate based on distance, waiting time, and night surcharge" << endl;
    cout << "========================================================" << endl;

    cout << " Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {

        case 1:
        {
            cout << " Enter distance: ";
            cin >> distance;

            Trip1.calculateFare(distance);
            break;
        }

        case 2:
        {
            cout << " Enter distance: ";
            cin >> distance;

            cout << " Enter waiting time: ";
            cin >> waitingTime;

            Trip1.calculateFare(distance, waitingTime);
            break;
        }

        case 3:
        {
            cout << " Enter distance: ";
            cin >> distance;

            cout << " Enter waiting time: ";
            cin >> waitingTime;

            cout << " Night Surcharge (Yes:1 , No:0): ";
            cin >> nightSurcharge;

            Trip1.calculateFare(distance, waitingTime, nightSurcharge);
            break;
        }

        default:
            cout << " Invalid Choice! Enter between 1 to 3" << endl;
    } 
    cout << endl;

    cout << " TRIP - 2 " << endl;
    // TRIP 2
    cout << "============== TaxiFare Management System ==============" << endl;
    cout << " 1. Calculate based on distance only " << endl;
    cout << " 2. Calculate based on distance and waiting time" << endl;
    cout << " 3. Calculate based on distance, waiting time, and night surcharge" << endl;
    cout << "========================================================" << endl;

    cout << " Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {

    case 1:
    {
        cout << " Enter distance: ";
        cin >> distance;

        Trip2.calculateFare(distance);
        break;
    }

    case 2:
    {
        cout << " Enter distance: ";
        cin >> distance;

        cout << " Enter waiting time: ";
        cin >> waitingTime;

        Trip2.calculateFare(distance, waitingTime);
        break;
    }

    case 3:
    {
        cout << " Enter distance: ";
        cin >> distance;

        cout << " Enter waiting time: ";
        cin >> waitingTime;

        cout << " Night Surcharge (Yes:1 , No:0): ";
        cin >> nightSurcharge;

        Trip2.calculateFare(distance, waitingTime, nightSurcharge);
        break;
    }

    default:
        cout << " Invalid Choice! Enter between 1 to 3" << endl;
    }

    // Combined Trips
    cout << "-------- Combined Trips --------" << endl;
    TaxiFare combined = Trip1 + Trip2;
    cout << " Total Distance: " << combined.getDistance() << " km" << endl;
    cout << " Total Fare: Rs." << combined.getFare() << endl;
    cout << "--------------------------------" << endl;
    cout << endl;

    // Comparing Fares
    if (Trip1 == Trip2) {
        cout << " Both trips have equal fares." << endl;
    }
    else {
        cout << " Both trips have different fares." << endl;
    }

    return 0;
}

