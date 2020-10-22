#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a number with less than 50 digits" << endl;

	const int LENGTH = 50;

	char *numbers;

	numbers = new char[LENGTH];

	cin.getline(numbers, LENGTH);

	int sum = 0;

	while(*numbers != '\0')
	{
		cout << *numbers;

		sum += *numbers - 48;

		numbers++;

	}

	cout << endl << sum << endl;
}
