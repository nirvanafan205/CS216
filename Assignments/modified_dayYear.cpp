/*
 Modify the DayOfYear class, written in an earlier Programming Challenge, to add a
constructor that takes two parameters: a string representing a month and an integer in the
range 0 through 31 representing the day of the month. The constructor should then initialize
the integer member of the class to represent the day speciﬁed by the month and day of month
parameters. The constructor should terminate the program with an appropriate error
message if the number entered for a day is outside the range of days for the month given.
 */
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

			else if( (day < 0 || day > 31) && (mo == "January" || mo == "March" || mo == "May" || mo == "July" || mo == "August" || mo == "October" || mo == "December")  )
			{
				die("date does not exist");
			}
		}

		void operator+()
		{
			++day;

			cout << "\nThe day after is " << mo << " " << day << endl;

			--day;
		}

		void operator-()
		{
			--day;	

			cout << "\nThe day before is " << mo << " " << day << endl;

			++day;
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
	
	+caller;
	-caller;
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
