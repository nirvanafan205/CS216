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

	char adult_tickets_input;
	vector<char>adult_tickets;

	while(adult_tickets_input = getchar() )
	{
		if(adult_tickets_input == EOF || adult_tickets_input == 10)
		{
			break;
		}

		else if(adult_tickets_input < 48 || adult_tickets_input > 57)
		{
			die("input error");
		}

		else
		{
			adult_tickets.push_back(adult_tickets_input);
		}
	}



	cout << "\nHow many child tickets were sold? \n";

	char child_tickets_input;
	vector<char>child_tickets;

	while(child_tickets_input = getchar() )
	{
		if(child_tickets_input == EOF || child_tickets_input == 10)
		{
			break;
		}

		else if(child_tickets_input < 48 || child_tickets_input > 57)
		{
			die("input error");
		}

		else
		{
			child_tickets.push_back(child_tickets_input);
		}
	}

	cout << "Movie Name:	";

	for(auto i = movie_name.begin(); i != movie_name.cend(); ++i)
	{
		cout << *i;
	}

	cout << "\n";

	for(auto i = adult_tickets.begin(); i !=  adult_tickets.cend(); ++i)
	{
		cout << *i;
	}

	cout << "\n";

	for(auto i = child_tickets.begin(); i !=  child_tickets.cend(); ++i)
	{
		cout << *i;
	}

	cout << "\n";
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << "\n";
	exit(EXIT_FAILURE);
}
