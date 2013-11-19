#include <iostream>
#include <math.h>

using namespace std;

void get_Divisors(int n)
{
     int i;
     double sqrt_of_n = sqrt((double) n);
     for (i = 2;i <= sqrt_of_n; i++)
         if (n % i == 0)
         {
               cout << i << ", ";
               get_Divisors(n/i);
               return;
         }
         cout << n;
}
int main()
{
    int i, n;
    while(1)
    {
    cout << "Enter a number and press ENTER(0 to exit): ";
    cin >> n;
    if (n == 0)
       break;
    get_Divisors(n);
    cout << "\n";
}
    return 0;
}
