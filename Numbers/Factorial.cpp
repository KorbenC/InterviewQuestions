#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n);

int main() {
	int n;


	while (1) {
		cout << "Enter a number (0 to quit): ";
		cin >> n;
		if (n == 0)
			break;
		cout << "factorial = " << factorial(n) << endl;
	}
	return 0;
}

/*
===================================
factorial
	This function uses recursion to produce the factorial.
===================================
*/  

int factorial(int n) {
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;

}
