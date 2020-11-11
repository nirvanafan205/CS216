#include <iostream>

using namespace std;

void sign(int n);

int main()
{
	int n = 5;

	sign(n);
}

void sign(int n)
{
	if(n > 0)
	{
		cout << "No Parking\n";
		sign(n - 1);
	}

	else
	{
		cout << "\nYes Parking\n";
	}
}

//Convert below comments function to use recursion 

/*
	void sign(int n)
	{
		while(n > 0)
		{
			cout << "No Parking\n";
			n--;
		}
	}			
*/
