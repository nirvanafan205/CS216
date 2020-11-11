/*
Write a recursive function that accepts two arguments into the parameters x and y
Fucntion should return the value of x times y

Matthew Garcia
CS 216
*/
#include <iostream>

using namespace std;

int mult(int x, int y);

int main()
{
	int x = 7;
	int y = 4;

	cout << mult(x, y) << endl;
}

int mult(int x, int y)
{
	if(x == 1)
	{
		return y;
	}

	else
	{
		return y + mult(x - 1, y);
	}
}
