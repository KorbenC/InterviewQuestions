#include <iostream>
#include <ctime>
using namespace std;

void selectionSort(int sortResult[], int size);
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
	cout << "Initial Array" << endl;
	print(Arr, size);
	selectionSort(Arr, size);
	cout << "Insertion Sorted Result Array" << endl;
	print(Arr, size);
	return 0;
}

void selectionSort(int sortResult[], int size)
{
	int first;

	for (int i = size - 1; i > 0; i--)
	{
		first = 0;
		for (int j = 1; j <= i; j++) //locates smallest between 1 and i 
		{
			if (sortResult[j] > sortResult[first])
			{
				first = j;
			}
		}
		int temp = sortResult[first]; //swaps the smallest with the element in position i 
		sortResult[first] = sortResult[i];
		sortResult[i] = temp;
	}
}

void print(int Arr[], int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

}
