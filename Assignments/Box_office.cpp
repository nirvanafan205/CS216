/* CS216 program 2
   Matthew Garcia 
   9/8/2020

   A movie theater only keeps a percentage of the revenue earned from ticket sales. The
   remainder goes to the distributor. Write a program that calculates a theater’s gross and net
   box ofﬁce proﬁt for a night. The program should ask for the name of the movie, and how
   many adult and child tickets were sold. (The price of an adult ticket is $6.00 and a child’s
   ticket is $3.00.) It should display a report similar to the following:

*/

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int gross(int adults, int child);

int main()
{
	cout << "What is the name of the movie? \n";

	char movie_name_input;
	vector<char>movie_name;

	while(movie_name_input = getchar() )
	{
		if(movie_name_input == EOF || movie_name_input == 10)
		{
			break;
		}

		else
		{
			movie_name.push_back(movie_name_input);
		}
	}

	cout << "\nHow many adult tickets were sold? \n";
	int adult_tickets;
	cin >> adult_tickets;

	cout << "\nHow many child tickets were sold? \n";
	int child_tickets;
	cin>> child_tickets;

	cout << "\nMovie Name:	";

	cout << "\"";

	for(auto i = movie_name.begin(); i != movie_name.cend(); ++i)
	{
		cout << *i;
	}

	cout << "\"";

	cout << "\nAdult Tickets Sold:	" << adult_tickets;
	cout << "\nChild Tickets Sold:	" << child_tickets;

	double total = gross(adult_tickets, child_tickets);

	cout << "\nGross Box OFfice Profit:	$ " << total << "\n";

	double office_profit = total * .2;

	double distributor = total - office_profit;

	cout << "Amount paid to Distributor:	$ " << distributor << "\n";

	cout << "Net Box Office Profit:		$ " <<  office_profit << "\n";
}

int gross(int adults, int child)
{
	int a = adults * 6;

	int b = child * 3;

	int total = a + b;
}
