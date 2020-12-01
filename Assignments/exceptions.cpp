#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& sorted);

void output(vector<int>& out);

int main()
{
	vector <int> nums;

	cout << "How many numbers do you want to input?" << endl;

	int amount;

	cin >> amount;

	int limit = 0;
	int input;

	while(limit != amount)
	{
		cin >> input;
		nums.push_back(input);
		limit++;
	}

	cout << endl;

	for(int j = 0; j < amount; j++)
	{
		sort(nums);
	}
}

void sort(vector<int>& sorted)
{
	output(sorted);	

	int size = sorted.size();

	for(int i = 0; i < size; i++)
	{
		if(i == 0)
		{
			int temp = sorted[size];
			sorted[size] = sorted[i];
			sorted[i] = temp;
		}
		
		else if( i < size)
		{
			int temp = sorted[i - 1];
			sorted[i - 1] = sorted[i];
			sorted[i] = temp;
		}
	}
}

void output(vector<int>& out)
{
	for(int b = 0; b < out.size(); b++)
	{
		cout << out[b] << endl;
	}	
}
