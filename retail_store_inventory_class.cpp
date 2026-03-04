#include <iostream>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

public:
	// Default constructor
	Inventory()
	{
		itemNumber = 0;
		quantity = 0;
		cost = 0.0;
		totalCost = 0.0;
	}
	
	// Parameterized constructor
	Inventory(int itemNumber, int quantity, double cost)
	{
		this->itemNumber = itemNumber;
		this->quantity = quantity;
		this->cost = cost;
		this->totalCost = quantity * cost;
	}

	// Setters
	void setItemNumber(int itemNumber)
	{
		if (itemNumber > 0)
		{
			this->itemNumber = itemNumber;
		}
		else
		{
			cout << "Invalid item number. Setting item number to 0." << endl;
		}
	}

	void setQuantity(int quantity)
	{
		if (quantity > 0)
		{
			this->quantity = quantity;
		}
		else
		{
			cout << "Invalid quantity. Setting quantity to 0." << endl;
		}
	}

	void setCost (double cost)
	{
		if (cost > 0)
		{
			this->cost = cost;
		}
		else
		{
			cout << "Invalid cost. Setting cost to 0." << endl;
		}
	}

	void setTotalCost()
	{
		if (quantity > 0 && cost > 0)
		{
			this->totalCost = quantity * cost;
		}
		else
		{
			cout << "Invalid quantity or cost. Setting total cost to 0." << endl;
			this->totalCost = 0.0;
		}
	}

	// Getters

	int getItemNumber() const
	{
		return itemNumber;
	}

	int getQuantity() const
	{
		return quantity;
	}

	double getCost() const
	{
		return cost;
	}

	double getTotalCost() const
	{
		return totalCost;
	}

};


int main()
{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

	cout << " =========== Retail Store Inventory =========== " << endl;
	cout << " Enter item number: ";
	cin >> itemNumber;

	cout << " Enter quantity: ";
	cin >> quantity;

	cout << " Enter cost: ";
	cin >> cost;
	cout << " ============================================== " << endl;

	Inventory inventory1 = Inventory(itemNumber, quantity, cost);
	cout << " Item number: " << inventory1.getItemNumber() << endl;
	cout << " Quantity: " << inventory1.getQuantity() << endl;
	cout << " Cost: " << inventory1.getCost() << endl;
	cout << " Total cost: " << inventory1.getTotalCost() << endl;

	cout << endl;

	Inventory inventory2 = Inventory();
	cout << " Item number: " << inventory2.getItemNumber() << endl;
	cout << " Quantity: " << inventory2.getQuantity() << endl;
	cout << " Cost: " << inventory2.getCost() << endl;
	cout << " Total cost: " << inventory2.getTotalCost() << endl;

    return 0;
}




