#include <iostream>

using namespace std;

int discounts(int price, int room_amount);

int main()
{
	cout << "What is the price of renting one room?\n";
	int price;
	cin >> price;

	cout << "\nWhat are the number of rooms booked?\n";
	int room_amount;
	cin >> room_amount;

	int total = discounts(price,room_amount);

	
}

int discounts(int price, int room_amount)
{
	
}
