#include <iostream>

using namespace std;

void bubbleSort(int sort[], int size);
void selectionSort();

int main()
{
	int bubble_array[] = { 8, 14, 6, 16, 10, 12, 4, 2};
	int selection_array[] = { 8, 14, 6, 16, 10, 12, 4, 2};

	int end = (sizeof(bubble_array) / sizeof(bubble_array[0]) ) - 1;

	for(int i = 0; i <= end; i++)
	{
		if(i == end)
		{
			cout << bubble_array[i] << endl;
		}

		else 
		{
			cout << bubble_array[i] << ", ";
		}
	}

	bubbleSort(bubble_array, end);
}

void bubbleSort(int sort[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if(sort[j] > sort[j + 1])
			{
				int temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
		}
	}

	for(int nums : sort[])
	{
		cout << nums;
	}
}

void selectionSort()
{

}
