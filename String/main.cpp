#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int find_last_entry(const string& str0, const string& str1)
{
    int entry = -1;
    int tmp_entry;

    for (int i = 0; i < str0.length()-str1.length(); i++)
    {
        tmp_entry = str0.find(str1, i);
        
        if (tmp_entry != -1)
        {
            entry = tmp_entry; 
        }
    }

    return entry;
}

string delete_all_word(const string& str0, const string& str1, const string& str2)
{
    string Str;
    int entry = find_last_entry(str0, str1);

    for (int i = 0; i < str0.length(); i++)
    {   
        if (i == entry)
        {
            Str.append(str2);
            i += str1.length()-1;
        }
        else
        {
            Str.push_back(str0[i]);
        }
            
    }
    cout << endl;
    return Str;
}

string String34(const string& str0, const string& str1, const string& str2)
{
    return delete_all_word(str0, str1, str2);        
}


int main()
{
                        
    string s0 = "Hello, Hello, Hello, Hello, world";
    string s1 = "Hello";
    string s2 = "WWW";

    cout  << String34(s0, s1, s2) << endl;

    return 0;
}



