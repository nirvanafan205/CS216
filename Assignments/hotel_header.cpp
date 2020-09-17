// header file

using namespace std;

void discounts(int price, int room_amount, int days, double tax);

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
