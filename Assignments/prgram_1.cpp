#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

bool die(const string & msg);

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

	cout << "Movie Name:	";

	for(auto i = movie_name.begin(); i != movie_name.cend(); ++i)
	{
		cout << *i;
	}

	cout << "\nAdult Tickets Sold:	" << adult_tickets;
	cout << "\nChild Tickets Sold:	" << child_tickets;
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
