#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

vector<string> find(const string& str, char ch);
void String42(const vector<string>& words);
void String43(const vector<string>& words);
void String44(const vector<string>& words);
void String45(const vector<string>& words);




int main()
{
                        
    string s = "HellAAA worlAAA Aello";
    char ch = ' ';

    vector<string> Words = find(s, ch);

    String45(Words);

    return 0;
}


vector<string> find(const string& str, char ch)
{
    /*поиск слов разреденными символом ch*/
    vector<string> words;
    string word;
    int len = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ch)
        {
            len++;
            if (i == str.length()-1)
            {
                for (int j = i-len+1; j < i+1; j++)
                    word.push_back(str[j]);
                words.push_back(word);
            } 
        }
        else if (len > 0)
        {
            for (int j = i-len; j < i; j++)
                word.push_back(str[j]);
            
            words.push_back(word);
            word = "";
            len = 0;
        }
    }

    return words;
}



void String42(const vector<string>& words)
{
    int count = 1;
    int words_size = words.size();
    int i;

    for (i = 0; i < words_size-1; i++)
    {
        for (int j = i+1; j < words_size; j++)
        {
            if (words[i][0] == words[j][0] && words[i][words[i].size()-1] == words[j][words[j].size()-1])
            {
                count++;
            }
        }
        cout << i+1 << ")" << "\""  << words[i] << "\": " << count << endl;
        
        if (count > 1)
            count = 1;     
    }

    cout << i+1 << ")" << "\"" << words[words_size-1] << "\": " << 1 << endl;
}

void String43(const vector<string>& words)
{
    /*функция считает сколько слов есть, в которых присутствует символ 'A' */
    int count = 0;
    int words_size = words.size();

    for (int i = 0; i < words_size; i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == 'A')
            {
                count++;
                break;
            }
        }
    }

    cout << "Count = " << count << endl;
}

void String44(const vector<string>& words)
{
    /*функция считает сколько слов есть, в которых присутствует символ 'A' 3 раза */
    int count = 0;
    int words_size = words.size();
    int count_A = 0;

    for (int i = 0; i < words_size; i++)
    {
        count_A = 0;

        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == 'A')
                count_A++;
        }

        if (count_A == 3)
            count++;
    }

    cout << "Count = " << count << endl;
}

void String45(const vector<string>& words)
{
    int min_len_word = words[0].size();

    for (int i = 1; i < words.size(); i++)
    {
        if (min_len_word > words[i].size())
            min_len_word = words[i].size();
    }

    cout << "min_len_word = " << min_len_word << endl;
}