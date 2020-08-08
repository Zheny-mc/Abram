//#include "Lib.h"
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;


void Text1(const string& file_name, int N, int K)
{
    ofstream f(file_name);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            f << '*';
        }
        f << endl;
    }

    f.close();
}

void Text2(const string& file_name, int N)
{
    ofstream f(file_name);

    for (int i = 'a'; i < ('a' + N); i++)
    {
        for (int j = 'a'; j <= i; j++)
        {
            f << (char)j;
        }
        f << endl;
    }
    

    f.close();
}

void Text3(const string& file_name, int N)
{
    ofstream f(file_name);

    for (int i = 'a'; i < ('a' + N); i++)
    {
        for (int j = 'a'; j <= i; j++)
        {
            f << (char)j;
        }

        for (int k = 0; k < N+('a')-i-1; k++)
        {
            f << '*';
        }

        f << endl;
    }
    f.close();
}

void Text4(const string& file_name)
{
    int count_char = 0;
    int count_str = -1;
    string str;

    ifstream f(file_name);

    while (!f.eof())
    {
        getline(f, str);
        count_char+=str.length();
        count_str++;
    }

    f.close();

    printf("Count_char = %d,\nCount_str = %d\n", count_char, count_str);
}


void Text5(const string& file_name, const string& str)
{
    ofstream f(file_name, std::ios_base::app);

    f << str << endl; 

    f.close();
}

int main()
{
    string file_name = "file.txt";
    
    Text5(file_name, file_name);

    

    return 0;
}