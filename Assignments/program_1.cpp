#include <iostream>

using namespace std;

bool soldOut(const string & msg);

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
		void buyDrink();

	private:
		void inputMoney(); // called by buyDrink function
		void dailyReport(); // called by destructor, report how much drink type remains and how much money collected
};

int main()
{

}

bool soldOut(const string & msg)
{
	cout << "sold out" << msg << endl;
	exit(EXIT_FAILURE);
}
