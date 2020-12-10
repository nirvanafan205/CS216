#include <iostream>
#include <vector>

using namespace std;

template<class T>
void sort(vector <T>& sorted);

template<class T>
void output(vector <T>& out);

int main()
{
	vector <int> nums;

	cout << "How many numbers do you want to input?(ints)" << endl;

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

	vector <double> nums2;

	cout << "\nHow many numbers do you want to input?(doubles)" << endl;

	int double_amount;

	cin >> double_amount;

	int double_limit = 0;
	double double_input;

	while(double_limit != double_amount)
	{
		cin >> double_input;
		nums2.push_back(double_input);
		double_limit++;
	}

	for(int b = 0; b < double_amount; b++)
	{
		sort(nums2);
	}

	vector <char> nums3;

	cout << "\nHow many characters do you want to input?" << endl;

	int char_amount;

	cin >> char_amount;

	int char_limit = 0;
	char char_input;

	while(char_amount != char_limit)
	{
		cin >> char_input;
		nums3.push_back(char_input);
		char_limit++;
	}

	for(int c = 0; c < char_amount; c++)
	{
		sort(nums3);
	}

	vector <string> nums4;

	cout << "\nHow many strings do you want to input?" << endl;

	int string_amount;

	cin >> string_amount;

	int string_limit = 0;
	string string_input;

	while(string_amount != string_limit)
	{
		cin >> string_input;
		nums4.push_back(string_input);
		string_limit++;
	}

	for(int s = 0; s < string_amount; s++)
	{
		sort(nums4);
	}
}

	template<class T>
void sort(vector <T>& sorted)
{
	output(sorted);	

	int size = sorted.size();

	for(int i = 0; i < size; i++)
	{
		if(i == 0)
		{
			T temp = sorted[size - 1];
			sorted[size - 1] = sorted[i];
			sorted[i] = temp;
		}

		else if( i < size)
		{
			T temp = sorted[size - (i + 1)];
			sorted[size - (i + 1)] = sorted[0];
			sorted[0] = temp;
		}
	}
}

	template<class T>
void output(vector <T>& out)
{
	for(int b = 0; b < out.size(); b++)
	{
		cout << out[b] << " ";
	}	

	cout << endl;
}
