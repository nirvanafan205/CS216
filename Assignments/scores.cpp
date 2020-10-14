/*Dynamically allocates an array to hold user defined number of test scores
 *Sorts test scores with bubble sort in ascending order
 *Pure pointer notation 
*/

#include <iostream>
#include <iomanip>

using namespace std;

bool die(const string & msg);

void sort(double nums[], int amount);

void average(double nums[], int amount);

int main()
{
	int size;

	cout << "how many scores do you want?" << endl;

	cin >> size;

	double *nums;

	nums = new (nothrow) double[size];

	if(nums == nullptr)
	{
		cout << "Error: memory could not be allocated";
	}

	else 
	{
		for(int i = 0; i < size; i++)
		{
			cin >> *(nums + i);

			if(*(nums + i) < 0)
			{
				die("No negative numbers\n");	
			}
		}
	}

	sort(nums, size);

	cout << "\nSorted scores: ";

	cout << fixed << showpoint << setprecision(2) << endl;

	for(int a = 0; a < size; a++)
	{
		cout << *(nums + a) << " ";
	}

	cout << endl;

	average(nums, size);
}

void sort(double nums[], int amount)
{
	for(int i = 1; i < amount; ++i)
	{
		for(int j = 0; j < amount - i; ++j)
		{
			if( *(nums + j) > *(nums + j + 1 ) )
			{
				double temp = *(nums + j);
				*(nums + j) = *(nums + j + 1);
				*(nums + j + 1 ) = temp;
			}
		}	
	}
}

void average(double nums[], int amount)
{
	double average;

	for(int scores = 0; scores < amount; scores++)
	{
		average += *(nums + scores);	
	}

	average /= amount;

	cout << fixed << showpoint << setprecision(2) << endl;

	cout << "average score: " << average << endl;
}

bool die(const string & msg)
{
	cout << "Input error: " << msg;
	exit(EXIT_FAILURE);
}
