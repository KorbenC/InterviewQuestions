#include <iostream>
#include <ctime>
using namespace std;

int linearSearch(int initialArr[], int size, int key);

int main()
{
	static const int size = 100;
	int Arr[size];

	srand(time(0)); //time is used as the random seed
	for (int i = 0; i <= size - 1; i++)
	{
		Arr[i] = rand() % 101; //assigns random number in array
	}

	cout << linearSearch(Arr, size, 50);
	return 0;
}

int linearSearch(int initialArr[], int size, int key)
{
	int searchResult = -1;
	for (int i = 0; i <= size - 1; i++) //cycles through each element in the array 
	{
		if (key == initialArr[i]) //if the value in array matches key then position is stored 
		{
			searchResult = i;
			cout << "Found" << endl;
			break; //breaks once values is found in array
		}
	}
	if (searchResult == -1)
		cout << "Not Found" << endl;
	return searchResult;
}
