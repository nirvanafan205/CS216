/* Matthew Garcia
 * CS216 Assignment # 2
 * 09/16/2020
 * The cost of renting a room at a hotel is, say $100.00 per night. For special occasions, such as a wedding or conference, the hotel offers a special discount as follows: If the number of rooms booked is at least 10, the discount is 10%; at least 20, the discount is 20%; and at least 30, the discount is 30%. Also, if rooms are booked for at least 3 days, then there is an additional 5% discount. Write a program that prompts the user to enter the cost of renting one room, the number of rooms booked, the program outputs the cost of renting one room, the discount on each room as a percent, the number of rooms booked, the number of days the rooms are booked, the total cost of the rooms, the sales tax, and the total billing  amount. Your program must use appropriate named constants to store special values such as various discounts.
*/

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
	if(room_amount < 10 && days < 3)
	{
		double sub_total = price * room_amount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nNo discount: 0%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if(room_amount < 10 && days > 2)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .05;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 5%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if( (room_amount > 9 && room_amount < 20) && days < 3)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .1;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if( (room_amount > 9 && room_amount < 20) && days > 2)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .15;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 15%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if( (room_amount > 19 && room_amount < 30) && days < 3)
	{
		double sub_total = price * room_amount;
		double discount = sub_total *  .2;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 20%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if( (room_amount > 19 && room_amount < 30) && days > 2)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .25;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 25%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}

	else if(room_amount > 29 && days < 3)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .3;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 30%";
		cout << "\nNumber of rooms booked:	 " << room_amount;
		cout << "\nTotal cost of rooms: 	$" << sub_total;
		cout << "\nSales tax:	 $" << room_tax;
		cout << "\nTotal billing:	 $" << total << endl;
	}

	else if(room_amount > 29 && days > 2)
	{
		double sub_total = price * room_amount;
		double discount = sub_total * .35;
		sub_total -= discount;
		double room_tax = sub_total * tax;
		double total = sub_total + room_tax;

		cout << "\nCost of renting one room: $" << price;
		cout << "\nDiscount: 35%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\nTotal cost of rooms: $" << sub_total;
		cout << "\nSales tax: $" << room_tax;
		cout << "\nTotal billing: $" << total << endl;
	}
}
