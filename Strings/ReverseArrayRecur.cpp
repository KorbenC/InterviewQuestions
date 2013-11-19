#include<iostream>
#include<cstring>
using namespace std;

void reverse( char *s, int n )
{
    if (  n < 2 )
    {
        return ;
    }


    char c = s[0];
    s[0] = s[n-1];
    s[n-1] = c;

    reverse( ++s, --n );
}

int main()
{
    char str[] = "Hello";
    cout << str << endl;
    reverse( str, strlen( str ) );
    cout << str << endl;
    cin.get();
}
