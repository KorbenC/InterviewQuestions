#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string str = "test";
    char ch[1];
    int length = (str.length());
    bool found = true;
    do{
    cout << "The word is: " << str << endl;
    cout << "Enter a letter: ";
    cin >> ch;
    
  
    for(int j = 0; j < length; j++)
    {
            if(str.find(ch) != std::string::npos)
            {
                      found = true;
                      for(int i = 0; i < strlen(ch); ++i)
                      {
                              str.erase(std::remove(str.begin(), str.end(), ch[i]), str.end());
                      }
                      break;
            }
            if(str.find(ch) == std::string::npos)
            {
                            cout << endl << ch << " not found in " << str << endl;
                            found = false;
                            break;
            }
    }
    }while(!found);
    
    cout << str << endl;
    return 0;
}
