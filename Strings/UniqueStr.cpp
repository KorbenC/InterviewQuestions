#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[80];
    bool isUnique = true;
    
    cout << "Enter a word: ";
    cin >> str;
    
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
          str[i] = tolower(str[i]);
    }
    
    for(int i = 0; i < length; i++)
    {
            for(int j= i+1; j < length; j++)
            {
                if(str[i] == str[j])
                {
                          isUnique = false;
                          break;
                }
            }
    }
    
    if(isUnique == true)
    {
                  cout << str << " is unique." << endl;
    }
    else
    {
                  cout << str << " is not unique." << endl;
    }
    
    return 0;
}