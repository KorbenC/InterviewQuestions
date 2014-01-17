#include <iostream>
#include <string.h>

using namespace std;

void reverse(char s[])
{
    int c, i, j;

    for(i = 0, j = strlen(s)-1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
int main()
{
    char str[100] = "databases and Software";

    reverse(str);
    cout << str << endl;
    return 0;
}
