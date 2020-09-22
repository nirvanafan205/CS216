/*
   Design an Inventory class that can hold information for an item in a retail store’s inventory.
   The class should have private member variables.
   This program should validate
   the user inputs to ensure that negative values are not accepted for item number, quantity, or cost.
*/

#include <iostream>
#include <iomanip>

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

void information(Inventory&);

void showValues(Inventory);

bool die(const string & msg);

int main()
{
	Inventory input;

	information(input);

	showValues(input);
}

void showValues(Inventory item)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "data number: " << item.getNum() << endl;
	cout << "item amount: " << item.getAmount() << endl;
	cout << "price: " << item.getPrice() << endl;
}

void information(Inventory &item)
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

	if(num < 0 || amount < 0 || price < 0)
	{
		die("No negative inputs allowed");
	}

	item.setZeros(num, amount, price);
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
