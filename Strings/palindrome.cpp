#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[80];
    bool palindrome = true;
    
    cout << "Enter a word: ";
    cin >> str;
    
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
          str[i] = tolower(str[i]);
    }
    
    for(int i = 0; i < length/2; i++)
    {
            if(str[i] != str[length - i -1])
            {
                      palindrome = false;
                      break;
            }
    }
    
    if(palindrome == true)
    {
                  cout << str << " is a palindrome." << endl;
    }
    else
    {
                  cout << str << " is not a palindrome." << endl;
    }
    
    return 0;
}
