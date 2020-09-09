#include <iostream>

using namespace std;

void discounts(int price, int room_amount, int days);

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

	discounts(price, room_amount, days);
}

void discounts(int price, int room_amount, int days)
{
	int total = price * room_amount;

	if(room_amount < 10 && days < 3)
	{
		cout << "Cost of renting one room: " << price;
		cout << "No discount: 0%";
		cout << "Number of rooms booked: " << room_amount;
	}	
}
