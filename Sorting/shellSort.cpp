#include <iostream>
#include <ctime>
using namespace std;

void shellSort(int Arr[], int size);
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
	shellSort(Arr, size);
	cout << "Shell Sorted Result Array" << endl;
	print(Arr, size);
	return 0;
}

void shellSort(int Arr[], int size)
{
	int i, j, inc, tmp = 0;
	for (inc = size / 2; inc > 0; inc /= 2)
	{
		for (i = inc; i < size; i++)
		{
			tmp = Arr[i];
			for (j = i; j >= inc; j -= inc)
			{
				if (tmp < Arr[j - inc])
				{
					Arr[j] = Arr[j - inc];
				}
				else
				{
					break;
				}
			}
			Arr[j] = tmp;
		}
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
