#include <iostream>

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

int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

int main()
{
    char str[100] = "databases and Software";

    reverse(str);
    cout << str << endl;
    return 0;
}
