/*
   Program has three functions: upper, lower, and flip
   Accepts C-String as an arguement for the functions
   Lower makes all chars lowercase
   Upper makes all chars uppercase
   Flip does the opposite case
   print them out in the following order
   flip, lower, and upper.

   CS216 
   Matthew Garcia
   */

#include <iostream>

using namespace std;

void upper(char *up);
void lower(char *low);
void flip(char *vice);

int main()
{
	cout << "Input no more than 50 letters" << endl;

	const int LENGTH = 50;

	char *input;
	char *lowers;
	char *uppers;

	input = new char[LENGTH];
	lowers = new char[LENGTH];
	uppers = new char[LENGTH];

	cin.getline(input, LENGTH);

	lowers = input;
	uppers = input;

	flip(input);
	
	cout << "\nFliped: ";

	while(*input != '\0')
	{
		cout << *input;
		input++;
	}

	lower(lowers);

	cout << "\nLower case: ";

	while(*lowers != '\0')
	{
		cout << *lowers;
		lowers++;
	}

	upper(uppers);

	cout << "\nUpper case: ";

	while(*uppers != '\0')
	{
		cout << *uppers;
		uppers++;
	}
	
	cout << endl;
}

void upper(char *up)
{
	while(*up != '\0')
	{
		if(*up > 96 && *up < 123)
		{
			*up = *up - 32;
		}

		up++;
	}
}

void lower(char *low)
{
	while(*low != '\0')
	{
		if(*low > 64 && *low < 91)
		{
			*low = *low + 32;
		}

		low++;
	}
}

void flip(char *vice)
{
	while(*vice != '\0')
	{
		if(*vice > 64 && *vice < 91)
		{
			*vice = *vice + 32;
		}

		else if(*vice > 96 && *vice < 123)
		{
			*vice = *vice - 32;
		}

		vice++;
	}
}
