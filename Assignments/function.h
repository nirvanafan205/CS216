using namespace std;

void discounts(int price, int room_amount, int days, double tax);

void discounts(int price, int room_amount, int days, double tax)
{

	if(room_amount < 10 && days < 3)
	{
		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nNo discount: 0%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}	

	else if(room_amount > 10 && days < 3)
	{
		tax += .1;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}

	else if(room_amount > 10 && days >= 3)
	{
		tax += .15;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}

	else if(room_amount > 19 && days >= 3)
	{
		tax += .25;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}

	else if(room_amount > 19 && days >= 3)
	{
		tax += .25;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}

	else if(room_amount > 29 && days >= 3)
	{
		tax += .35;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}

	else if(room_amount > 10 && days < 3)
	{
		tax += .1;

		double taxe = (price * room_amount) * tax;
		int total = (price * room_amount) + taxe;
		int room_total = price * room_amount;

		cout << "\nCost of renting one room: " << price;
		cout << "\nDiscount: 10%";
		cout << "\nNumber of rooms booked: " << room_amount;
		cout << "\ntotal cost of the rooms: " << room_total;
		cout << "\nsales tax: " << taxe;
		cout << "\ntotal billing: " << total;
		cout <<"\n";
	}
}
