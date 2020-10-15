#include <iostream>

using namespace std;

bool die(const string & msg);

class DayOfYear
{
	public:

		int day;
		string mo;

		DayOfYear(int number, string month)
		{
			day = number;
			mo = month;
			
			if( (day < 0 || day > 30)  && (mo == "April" || mo == "June" || mo == "September" || mo == "November") )
			{
				die("date does not exist");
			}

			else if( (day < 0 || day > 29) && mo == "February")
			{
				die("date does not exist");
			}
		}

		void print()
		{
			if(mo == "January")
			{
				cout << mo  << endl;
			}

			else if(mo == "February")
			{
				cout << mo  << endl;
			}

			else if(mo == "March")
			{
				cout << mo  << endl;
			}

			else if(mo == "April")
			{
				cout << mo  << endl;
			}

			else if(mo == "May")
			{
				cout << mo  << endl;
			}

			else if(mo == "June")
			{
				cout << mo  << endl;
			}

			else if(mo == "July")
			{
				cout << mo  << endl;
			}

			else if(mo == "August")
			{
				cout << mo  << endl;
			}

			else if(mo == "September")
			{
				cout << mo  << endl;
			}

			else if(mo == "October")
			{
				cout << mo  << endl;
			}

			else if(mo == "November")
			{
				cout << mo  << endl;
			}

			else if(mo == "December")
			{
				cout << mo << endl;	
			}

		}
};

int main()
{
	cout << "This program converts a Month and day of month into a day of the year in range 1.. 365" << endl << "Enter a month and day ";

	int num;

	string m;

	cin >> m;

	cin >> num;

	DayOfYear caller(num , m );

	caller.print();
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
