/*
   User inputs a series of single digit numbers
   Using pointers, it is inputed as a C-String and dynamically allocated
   adds all of the single digit numbers and returns it
   also displays the highest and lowest digits in the string

   CS216
   Matthew Garcia
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a number with less than 50 digits" << endl;

	const int LENGTH = 50;
	char *numbers;

	numbers = new char[LENGTH];

	cin.getline(numbers, LENGTH);

	int sum = 0;
	int high = 0;
	int low = *numbers - 48;

	while(*numbers != '\0')
	{
		cout << *numbers;

		sum += *numbers - 48;
		
		if((*numbers - 48) >= high)
		{
			high = *numbers - 48;
		}

		else if((*numbers - 48) <= low)
		{
			low = *numbers - 48;
		}

		numbers++;
	}

	cout << "\nThe sum of the numbers are " <<  sum << endl;
	cout << "The highest digit is: " <<  high << endl;
	cout << "The lowest digit is: " << low << endl;
}
