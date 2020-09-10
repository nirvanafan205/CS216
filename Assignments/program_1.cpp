#include <iostream>

using namespace std;

void discounts(int price, int room_amount, int days, double tax);

int main()
{
	cout << "What is the price of renting one room?\n";
	int price;
	cin >> price;

	cout << "\nWhat are the number of rooms booked?\n";
	int room_amount;
	cin >> room_amount;

	cout << "\nWhat is the number of days will you be staying?\n";
	int days;
	cin >> days;

	cout <<"\nWhat is the tax %?\n";
	double tax;
	cin >> tax;
	tax /= 100;


	discounts(price, room_amount, days, tax);
}

void discounts(int price, int room_amount, int days, double tax)
{
	double taxe = (price * room_amount) * tax;

	int total = (price * room_amount) + taxe;

	int room_total = price * room_amount;

	if(room_amount < 10 && days < 3)
	{
		cout << "\nCost of renting one room: " << price;
		cout << "\nNo discount: 0%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}	
}
