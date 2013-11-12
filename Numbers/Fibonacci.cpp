#include <iostream>
using namespace std;

int fib(unsigned long int n)
{
    if (n <= 1)
    {
          return 1;
    }
    else
    {
        return fib(n-1)+ fib(n-2);
    }
}

int main()
{
    unsigned long int n;
    while(1)
    {
            cout << "Enter a number (0 to quit): ";
            cin >> n;
            if(n == 0)
                 exit(0);
               
            for(int i = 0; i <= n; i++)
            {
                   cout << fib(i) << endl;
            }
            
    }
    return 0;
}


