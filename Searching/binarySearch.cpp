#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int sortResult[], int size, int key);
int* quickSort(int sortResult[], int left, int right);
void print(int Arr[], int size);

int main()
{
	static const int size = 100;
	int Arr[size];

	srand(time(0)); //time is used as the random seed
	for (int i = 0; i <= size - 1; i++)
	{
		Arr[i] = rand() % 101; //assigns random number in array
	}
	cout << binarySearch(Arr, size, 50);

	return 0;
}

int binarySearch(int sortResult[], int size, int key)
{
	quickSort(sortResult, 0, size); //binary search requires that the array be sorted before search 
	int low = 0;
	int high = size - 1;
	int loc = -1;

	//runs as long the key has not been found and low does not become greater/equal than high 
	while (high >= low && loc == -1)
	{
		int mid = low + (high - low) / 2;
		if (sortResult[mid] == key)//Checks if middle value is equal to the key
		{
			loc = mid;
		}
		else if (sortResult[mid] < key)//if key is less than mid point then the key value must be in the second half of the array if it exists at all
		{
			low = mid + 1;
		}
		else if (sortResult[mid] > key)//if key is greater than the mid point then the key value must be in the first half of the array if it exists at all
		{
			high = mid - 1;
		}

	}
	if (loc == -1)
		cout << "Not Found" << endl;
	else
		cout << "Found" << endl;

	return loc;
}

int* quickSort(int sortResult[], int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = sortResult[(left + right) / 2];
	/* partition */
	while (i <= j)
	{
		while (sortResult[i] < pivot)
		{
			i++;
		}
		while (sortResult[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			tmp = sortResult[i];
			sortResult[i] = sortResult[j];
			sortResult[j] = tmp;
			i++;
			j--;
		}

	};
	/* recursion */
	if (left < j)
	{
		quickSort(sortResult, left, j);
	}
	if (i < right)
	{
		quickSort(sortResult, i, right);
	}
	return sortResult;
}

void print(int Arr[], int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

}
