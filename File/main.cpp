//#include "Lib.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string String39(const string& str)
{
    string Str; 
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] >= 'A' || )
        {
            num1 = ++i;
            break;
        }
    }

    

    return count;
}

int main()
{
    string str = "Hello world Hello";
    
    cout << '|' << String39(str) << '|' << endl;

    return 0;
}