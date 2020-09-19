/*
   Design an Inventory class that can hold information for an item in a retail store’s inventory.
   The class should have the following private member variables.
   This program should validate
   the user inputs to ensure that negative values are not accepted for item number, quantity, or cost.
*/

#include <iostream>

using namespace std;

class Inventory
{
	private:
		int itemNumber;
		int quantity;
		double cost;

	public:
		void setZeros(int number, int amount, double price);

		int getNum()
		{
			return itemNumber;
		}

		int getAmount()
		{
			return quantity;
		}

		double getPrice()
		{
			return cost;
		}
};

void Inventory::setZeros(int number, int amount, double price)
{
	itemNumber = number;
	quantity = amount;
	cost = price;
}


void input(Inventory &item);

int main()
{
	Inventory input;


}


void input(Inventory &item)
{
	int num;
	int amount;
	double price;

	cout << "Enter data" << endl;

	cout << "Item number" << endl;
	cin >> num;

	cout << "Quantity on hand" << endl;
	cin >> amount;

	cout << "Wholesale per-unit cost" << endl;
	cin >> price;
}
