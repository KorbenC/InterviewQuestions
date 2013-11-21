#include <iostream>
#include <ctime>
using namespace std;

void bubbleSort(int sortResult[], int size)
{
    for(int i = 0; i < size-1; i++)
	{
		for(int j = 0; j < size-1; j++)
		{
			if(sortResult[j+1] < sortResult[j]) //if next element is greater than the current element then swap elements
			{
				int temp = sortResult[j]; //swaps the elements
				sortResult[j] = sortResult[j+1];
				sortResult[j+1] = temp;
			}
		}
	}
}

void print(int Arr[], int size)
{
     cout << "Bubble Sorted Array" << endl;
     for(int i = 0; i <= size-1; i++)
     {
             cout << Arr[i] << " ";
     }
     cout << endl;
             
}



int main()
{
    static const int size = 100;
    int Arr[size];
    
	srand(time(0)); //time is used as the random seed
	for(int i = 0; i <= size-1;  i++)
	{
		Arr[i] = rand() % 101; //assigns random number in array
	}
    
    bubbleSort(Arr, size);
    print(Arr, size);
    cin.get();
}
