#include <iostream>
using namespace std;

void fizzbuzz(int n);

int main() {
	int i = 0;

	fizzbuzz(i);
	return 0;
}

/*
============================================================================
fizzbuzz
	Function prints any number divisible by three 
	is replaced by the word fizz and any divisible by five
	by the word buzz. Numbers divisible by both become fizz buzz.
============================================================================
*/  

void fizzbuzz(int i) 
{
	for (i = 1; i < 101; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}
