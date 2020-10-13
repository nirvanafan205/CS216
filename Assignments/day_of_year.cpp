/*Assuming that a year has 365 days, write a class named DayOfYear that takes an integer
  representing a day of the year and translates it to a string consisting of the month followed
  by day of the month. For example,
  Day 2 would be January 2
  Day 32 would be February 1
  Day 365 would be December 31.
  The constructor for the class should take as parameter an integer representing the day of
  the year, and the class should have a member function print() that prints the day in the
  month-day format. The class should have an integer member variable to represent the day
  and should have static member variables of type string to assist in the translation from
  the integer format to the month–day format.
  Test your class by inputting various integers representing days and printing out their representation in the month–day format.
*/

#include <iostream>

using namespace std;

bool die(const string & msg);

class DayOfYear
{
	public: 

	int day;

	DayOfYear(int number)
	{
		day = number;
	}

	void print()
	{
		string month;
		if(day > 0 && day < 32)
		{
			month = "January";
			cout << month << " " << day << endl;
		}

		else if(day > 31 && day < 61)
		{
			month = "February";
			day -= 31;
			cout << month << " " << day << endl;
		}

		else if(day > 60 && day < 92)
		{
			month = "March";
			day -= 60;
			cout << month << " " << day << endl;
		}

		else if(day > 91 && day < 122)
		{
			month = "April";
			day -= 91;
			cout << month << " " << day << endl;
		}

		else if(day > 121 && day < 153)
		{
			month = "May";
			day -= 121;
			cout << month << " " << day << endl;
		}

		else if(day > 152 && day < 183)
		{
			month = "June";
			day -= 152;
			cout << month << " " << day << endl;
		}

		else if(day > 182 && day < 214)
		{
			month = "July";
			day -= 182;
			cout << month << " " << day << endl;
		}

		else if(day > 213 && day < 245)
		{
			month = "August";
			day -= 213;
			cout << month << " " << day << endl;
		}

		else if(day > 244 && day < 275)
		{
			month = "September";
			day -= 244;
			cout << month << " " << day << endl;
		}

		else if(day > 274 && day < 306)
		{
			month = "October";
			day -= 274;
			cout << month << " " << day << endl;
		}

		else if(day > 305 && day < 336)
		{
			month = "November";
			day -= 305;
			cout << month << " " << day << endl;
		}

		else if(day > 335 && day < 367)
		{
			month = "December";
			day -= 335;
			cout << month << " " << day << endl;	
		}

		else
		{
			die("date does not exist");
		}
	}
};

int main()
{
	cout << "This program converts a day given by a number 1 through 365 into a month and a day." << endl << "Enter a number: ";

	int num;

	cin >> num;

	DayOfYear caller(num);

	caller.print();
}

bool die(const string & msg)
{
	cout << "Fatal error: " << msg << endl;
	exit(EXIT_FAILURE);
}
