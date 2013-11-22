#include <iostream>
#include <ctime>
using namespace std;

void quickSort(int sortResult[], int left, int right);
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
	quickSort(Arr, 0, size);
	cout << "Insertion Sorted Result Array" << endl;
	print(Arr, size);
	return 0;
}

void quickSort(int sortResult[], int left, int right)
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
}

void print(int Arr[], int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

}
