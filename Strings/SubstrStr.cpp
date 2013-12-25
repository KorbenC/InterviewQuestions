#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char * str ="This is a simple string";
    char * word = "string";
    
    char * test = strstr (str,word);
    
    if(test)
    {
         cout << "is a substring." << endl;         
    }
    else
    {
         cout << "not a substring." << endl;
    }
    
    return 0;
}