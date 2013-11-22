#include <iostream>
#include <ctime>
using namespace std;

void mergeSort(int Arr[], int low, int high);
void merge(int sortResult[], int left, int mid1, int mid2, int right);
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
	mergeSort(Arr, 0, size);
	cout << "Insertion Sorted Result Array" << endl;
	print(Arr, size);
	return 0;
}

void mergeSort(int Arr[], int low, int high)
{
	int mid = 0;
	if ((high - low) >= 1)
	{
		mid = ((low + high) / 2);
		mergeSort(Arr, low, mid); //runs recursive function with first half of array 
		mergeSort(Arr, mid + 1, high); //runs recursive function with second half of the array 
		merge(Arr, low, mid, mid + 1, high); //call the merge and totals the number of comparisons 
	}
}

void merge(int sortResult[], int left, int mid1, int mid2, int right)
{
	int leftIndex = left;
	int rightIndex = mid2;
	int combinedIndex = left;
	int combined[right];

	while (leftIndex <= mid1 && rightIndex <= right) //merge arrays until the end of the either array 
	{
		//places smaller of the two current elements into the resulting combined array 
		if (sortResult[leftIndex] <= sortResult[rightIndex])
		{
			combined[combinedIndex++] = sortResult[leftIndex++];
		}
		else
		{
			combined[combinedIndex++] = sortResult[rightIndex++];
		}
	}

	if (leftIndex == mid2) //if the left array is at end 
	{
		while (rightIndex <= right) //copy the remaining elements in the right array 
		{
			combined[combinedIndex++] = sortResult[rightIndex++];
		}
	}
	else //if the right array is at end  
	{
		while (leftIndex <= mid1) //copy the remaing elements in the left array 
		{
			combined[combinedIndex++] = sortResult[leftIndex++];
		}
	}

	//copies values back in the original result array 
	for (int i = left; i <= right; i++)
		sortResult[i] = combined[i];
}

void print(int Arr[], int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;

}
