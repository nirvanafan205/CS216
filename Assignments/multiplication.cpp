/*
Write a recursive function that accepts two arguments into the parameters x and y
Fucntion should return the value of x times y

Matthew Garcia
CS 216
*/
#include <iostream>

using namespace std;

void mult(int x, int y);

int main()
{
	int x = 7;
	int y = 4;

	mult(x, y);
}

void mult(int x, int y)
{
	if(x > 1)
	{
		cout << y << endl;
		mult(x - 1, y + 4);
	}

	else
	{
		cout << y << endl;
	}
}
