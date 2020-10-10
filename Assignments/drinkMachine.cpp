/* Matthew Garcia
  CS216 Assignments 8 - 9
 Call the inputMoney function, passing it the patron’s drink choice.
 If the patron no longer wishes to make the purchase, return all input money.
 If the machine is out of the requested soda, display an appropriate “sold out” message and return all input money.
 If the machine has the soda and enough money was entered, complete the sale by updating the quantity on hand and money collected information,
 calculating any change due to be returned to the patron, and delivering the soda.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class drinkMachine
{
	struct drink
	{
		string name;
		double price;
		int amount;
	};

	public: 
	void displayChoices();
	void buyDrink(int input);

	drinkMachine();
	~drinkMachine();

	private:
	drink inventory[5] = { {"Cola", 1.00, 20 }, {"Root beer", 1.00, 20 }, {"Orange soda", 1.00, 20}, {"Grape soda", 1.00, 20}, {"Water Bottle", 1.50, 20} };
	void inputMoney(int); // called by buyDrink function
	void dailyReport(); // called by destructor, report how much drink type remains and how much money collected
	char validResponse();
	double balance;
	double total;
};

int validate(int);

int main()
{
	drinkMachine drinking;
	int selection;
	bool pass = true;

	while(pass)
	{
		cout << "Press 1 to continue" << endl << "Press any key to quit" << endl;;

		cin >> selection;

		if(selection == 1)
		{
			drinking.displayChoices();
		}

		else
		{
			break;
		}
	}
}

drinkMachine::drinkMachine()
{
	balance = 0;
	total = 0;
}

drinkMachine::~drinkMachine()
{
	dailyReport();
}

void drinkMachine::displayChoices()
{
	cout << "Make a selection: " << endl;

	for(int a = 0; a < 5; ++a)
	{
		cout << fixed << setprecision(2);
		cout << a + 1 << ": " << inventory[a].name << " $" << inventory[a].price << endl;
	}

	cout << "6: Quit" << endl;

	int input;

	cin >> input;

	if(input > 0 && input < 6)
	{
		buyDrink(input);
	}

	else
	{
		cout << "input error, try again" << endl;
		displayChoices();
	}
}

void drinkMachine::buyDrink(int input)
{
	char confirm;
	int decision;

	if(inventory[input].amount < 1)
	{
		cout << "Sold out of " << inventory[input].name << endl;
	}

	while(balance < inventory[input].price)
	{
		cout << "Insufficient funds" << endl << "1. Make deposit" << endl << "2. Cancel" << endl;

		cin >> decision;

		while(decision != 1 && decision != 2)
		{
			cout << "input error" << endl;
			cout << "Insufficient funds" << endl << "1. Make deposit" << endl << "2. Cancel" << endl;
		}

		if(decision == 1)
		{
			inputMoney(input);
		}

		else if(decision == 2)
		{
			return;
		}
	}

	cout << "Confirm purchase of 1 " << inventory[input].name << endl;
	confirm = validResponse();

	if(confirm == 'Y' || confirm == 'y')
	{
		inventory[input].amount -= 1;
		total += inventory[input].price;
		balance -= inventory[input].price;

		cout << "Your balance is $" << balance << endl;
	}
}

char drinkMachine::validResponse()
{
	char response;
	response = cin.get();
	cin.ignore();

	while(response != 'y' && response != 'Y' && response != 'n' && response != 'N')
	{
		cout << "Invalid response. Respons with 'Y' or 'N'" << endl;

		response = cin.get();

		cin.ignore();
	}

	return response;
}

int validate(int max)
{
	int select;
	cin >> select;
	cin.ignore();

	while(select < 1 || select > max)
	{
		cout << "Invalid, try again" << endl;
		cin >> select;
		cin.ignore();
	}

	return select;
}

void drinkMachine::inputMoney(int choice)
{
	double deposit;
	cout << "Your cost is $" << inventory[choice].price << endl;
	cout << "balance $" << balance << endl;
	cout << "How much to deposit?" << endl;
	cin >> deposit;
	cin.ignore();
	balance += deposit;
}

void drinkMachine::dailyReport()
{
	cout << "Remanding inventory: " << endl;

	for(int x = 0; x < 5; x++)
	{
		cout << x + 1 << ". " << inventory[x].name << ": " << inventory[x].amount << endl;
	}

	cout << "Total sales: $" << total;
}
