#include <iostream>

using namespace std;

void bubbleSort(int sort[], int size);
void selectionSort(int sort[], int size);

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

	for(int j = 0; j <= end; j++)
	{
		if(j == end)
		{
			cout << selection_array[j] << endl;
		}

		else 
		{
			cout << selection_array[j] << ", ";
		}
	}


	int n = sizeof(selection_array)/sizeof(selection_array[0]);  

	selectionSort(selection_array, n);
}

void bubbleSort(int sort[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i; j++)
		{
			if(sort[j] > sort[j + 1])
			{
				int temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
		}
	}

	for(int i = 0; i <= size; i++)
	{
		if(i == size)
		{
			cout << sort[i] << endl;
		}

		else 
		{
			cout << sort[i] << ", ";
		}
	}
}

void selectionSort(int arr[], int n)  
{  
	for(int i = 0; i < n - 1; i++)  
	{  
		int min_idx = i;  

		for (int j = i + 1; j < n; j++)  
		{
			if (arr[j] < arr[min_idx])  
			{
				min_idx = j;  
			}
		}

		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}  

	for(int b = 0; b < n; b++)
	{
		if(b == n - 1)
		{
			cout << arr[b] << endl;
		}

		else 
		{
			cout << arr[b] << ", ";
		}
	}
}  
