#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int sortResult[], int size);
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
	insertionSort(Arr, size);
	cout << "Insertion Sorted Result Array" << endl;
	print(Arr, size);
	return 0;
}

void insertionSort(int sortResult[], int size)
{
	int j, insert = 0;
	for (int i = 1; i <= size - 1; i++)
	{
		insert = sortResult[i];
		for (j = i - 1; (j >= 0) && (sortResult[j] > insert); j--) //greater values move up in the array  
		{
			sortResult[j + 1] = sortResult[j];
		}
		sortResult[j + 1] = insert; //put the inserted value in the its the right place to be sorted 
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
